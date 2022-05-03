#ifndef _KSO_STRING_H_
#define _KSO_STRING_H_

#include <cstddef>
#include <iterator>
#include "LinkedList.h"

template<class T>
class KsoString
{
public:
	KsoString();
	// 数组构造
	KsoString(T array[], int len);
	// 拷贝构造
	KsoString(KsoString<T>* src);
	// 析构函数
	~KsoString();
	// 增
	void insertNode(const T& data, int position);
	// 删
	void deleteNode(int position);
	// 改
	void updataNode(const T& data, int position);
	// 查
	T selectNode(int position);
	int getSize();
	bool empty();
	// 打印
	void printList();
	// 运算符重载
	T& operator[](int position);
private:
	int m_size;
	LinkedNode<T>* m_head;
	bool checkIegal(int position);
	LinkedNode<T>* selectPointer(int position);
};


#endif // !_KSO_STRING_H_
