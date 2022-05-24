### 一、week04

#### 1、问题

**实现一个KMatrix矩阵容器类**

使用C++编写一个KMatrix容器类，内部可以存储一个二维矩阵数据，并满足以下要求：

- 使用所学的标准容器来组织和存储矩阵数据
- KMatrix可以存储int/double等常规数值类型，同一个矩阵内部存储的数据类型是一致的
- 实现KMatrix的初始化函数(KMatrix::init(row_count, col_count))(初始数据为0)
- 实现KMatrix获取行列数的函数(int KMatrix::getRows() const、int KMatrix::getCols() const)
- 实现KMatrix的数据修改与获取函数(KMatrix::setData(row, col, value)、Value KMatrix::getData(row, col) const)
- 实现KMatrix删除行列的函数(KMatrix::erase_row(row)、KMatrix::erase_col(col))
- 实现KMatrix的加(+)、减(-)、叉乘(*) 运算, 使用运算符重载实现
- 实现KMatrix的转置(KMatrix KMatrix::transpose() const) (交换行列)
- 实现KMatrix的控制台打印输出(KMatrix::print() const) (需要体现矩阵的基本结构)；

**加分项**

- 可以考虑KMatrix数据的压缩存储方案（即矩阵中数据为0的元素不占用存储空间）要求仍然以标准容器组合来实现
- 设计迭代器可以访问矩阵的内容。

#### 2、设计

KMatrix虚基类：声明了接口方法以及矩阵的公共属性，定义了一些公共方法以减少代码冗余

KMatrixMap类：继承自KMatrix，底层数据结构存储结构使用`map<pair<int, int>, T>`实现，适合稀疏矩阵

KMatrixVector类：继承自KMatrix，底层数据结构存储结构使用`vector<vector<T>>`实现，适合稠密矩阵

KMatrixIterator类：KMatrix的迭代器，使用当前行列值和KMatrix指针类来实现矩阵的迭代功能

KMatrixBuilder类：KMatrix的建造者类

由于接口类值存储行列这两个公共值，所以一些底层存储结构导致不同的操作（如：setData、getData）声明为接口方法由子类定义，一些公共的代码定义在接口方法里（如print调用getData即可），所以迭代器存储一个虚基类的指针

#### 3、设计模式

- Builder模式
