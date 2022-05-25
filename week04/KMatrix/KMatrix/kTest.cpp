// -------------------------------------------------------
// kTest.cpp
// 创建者： xie tingyu
// 创建时间： 2022/5/21
// 功能描述： 测试类的相关功能以及内存泄漏
// Copyright 2013 Kingsoft
// --------------------------------------------------------

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <memory>
#include "KMatrixVector.h"
#include "kMatrixMap.h"
#include "kMatrixBuilder.h"
#include "kMatrixIterator.h"

using namespace std;

void TestMatrixMap(shared_ptr<KMatrixBuilder<int>> builder);
void TestMatrixVector(shared_ptr<KMatrixBuilder<int>> builder);

int main()
{
    shared_ptr<KMatrixBuilder<int>> builder = make_shared<KMatrixBuilder<int>>(2, 2);
    // KMatrixBuilder<int>* builder = new KMatrixBuilder<int>(2, 2);
    TestMatrixMap(builder);
    TestMatrixVector(builder);
    builder = nullptr;
    int res = _CrtDumpMemoryLeaks();
    cout << "内存泄露处：" << res << endl;
}

void TestMatrixMap(shared_ptr<KMatrixBuilder<int>> builder)
{
    KMatrixMap<int> matrix1(2, 2, 1);
    cout << "matrix1" << endl;
    matrix1.print();
    cout << "---------" << endl << endl;

    int arr[4] = { 1,2,3,4 };
    KMatrixMap<int> matrix2(2, 2, arr);
    cout << "matrix2 数组构造" << endl;
    matrix2.print();
    cout << "---------" << endl << endl;

    cout << "matrix2 + matrix1 - matrix2" << endl;
    ((matrix2 + matrix1 - matrix2)).print();
    cout << "---------" << endl << endl;

    cout << "matrix2 转置" << endl;
    matrix2.transpose().print();
    cout << "---------" << endl << endl;

    cout << "matrix1 * matrix2 * matrix2" << endl;
    (matrix1 * matrix2 * matrix2).print();
    cout << "---------" << endl << endl;

    cout << "build matrix3" << endl;
    KMatrixMap<int> matrix3 = builder->buildMapMatrix(0, 0, 1)
        ->buildMapMatrix(0, 1, 2)
        ->buildMapMatrix(1, 0, 3)
        ->buildMapMatrix(1, 1, 4)
        ->getMapMatrix();
    matrix3.print();
    cout << "---------" << endl << endl;

    cout << "==" << endl;
    cout << "matrix2 == matrix3 ? " << (matrix2 == matrix3 ? "yes" : "no") << endl;
    cout << "---------" << endl << endl;

    cout << "KMatrixIterator" << endl;
    KMatrixIterator<int> it = matrix3.begin();
    for (; it != matrix3.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    cout << "---------" << endl << endl;

    cout << "matrix3 删除1行1列" << endl;
    matrix3.eraseRow(1);
    matrix3.eraseColumns(1);
    matrix3.print();
    cout << "---------" << endl << endl;
}

void TestMatrixVector(shared_ptr<KMatrixBuilder<int>> builder)
{
    KMatrixVector<int> matrix1(2, 2, 1);
    cout << "matrix1" << endl;
    matrix1.print();
    cout << "---------" << endl << endl;

    int arr[4] = { 1,2,3,4 };
    KMatrixVector<int> matrix2(2, 2, arr);
    cout << "matrix2 数组构造" << endl;
    matrix2.print();
    cout << "---------" << endl << endl;

    cout << "matrix2 + matrix1 - matrix2" << endl;
    ((matrix2 + matrix1 - matrix2)).print();
    cout << "---------" << endl << endl;

    cout << "matrix2 转置" << endl;
    matrix2.transpose().print();
    cout << "---------" << endl << endl;

    cout << "matrix1 * matrix2 * matrix2" << endl;
    (matrix1 * matrix2 * matrix2).print();
    cout << "---------" << endl << endl;

    cout << "build matrix3" << endl;
    KMatrixVector<int> matrix3 = builder->buildVectorMatrix(0, 0, 1)
        ->buildVectorMatrix(0, 1, 2)
        ->buildVectorMatrix(1, 0, 3)
        ->buildVectorMatrix(1, 1, 4)
        ->getVectorMatrix();
    matrix3.print();
    cout << "---------" << endl << endl;

    cout << "==" << endl;
    cout << "matrix2 == matrix3 ? " << (matrix2 == matrix3 ? "yes" : "no") << endl;
    cout << "---------" << endl << endl;

    cout << "KMatrixIterator" << endl;
    KMatrixIterator<int> it = matrix3.begin();
    for (; it != matrix3.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    cout << "---------" << endl << endl;

    cout << "matrix3 删除1行1列" << endl;
    matrix3.eraseRow(1);
    matrix3.eraseColumns(1);
    matrix3.print();
    cout << "---------" << endl << endl;
}