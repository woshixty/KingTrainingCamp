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
	// ���鹹��
	KsoString(T array[], int len);
	// ��������
	KsoString(KsoString<T>* src);
	// ��������
	~KsoString();
	// ��
	void insertNode(const T& data, int position);
	// ɾ
	void deleteNode(int position);
	// ��
	void updataNode(const T& data, int position);
	// ��
	T selectNode(int position);
	int getSize();
	bool empty();
	// ��ӡ
	void printList();
	// ���������
	T& operator[](int position);
private:
	int m_size;
	LinkedNode<T>* m_head;
	bool checkIegal(int position);
	LinkedNode<T>* selectPointer(int position);
};


#endif // !_KSO_STRING_H_
