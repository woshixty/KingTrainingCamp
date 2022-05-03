#include"KsoString.h"
#include<iostream>

using namespace std;

template<class T>
KsoString<T>::KsoString()
{
	// ��ģ�巺�ͽ�������
	static_assert(std::is_same<T, char>::value || std::is_same<T, wchar_t>::value, "only char or wchar_t allowed");
	m_size = 0;
	m_head = NULL;
}

template<class T>
KsoString<T>::KsoString(T array[], int len)
{
	static_assert(std::is_same<T, char>::value || std::is_same<T, wchar_t>::value, "only char or wchar_t allowed");
	m_head = NULL;
	m_size = 0;
	for (int i = 0; i < len; i++)
	{
		insertNode(array[i], i);
	}
}

template<class T>
KsoString<T>::KsoString(KsoString<T>* src)
{
	static_assert(std::is_same<T, char>::value || std::is_same<T, wchar_t>::value, "only char or wchar_t allowed");
	m_head = NULL;
	m_size = 0;
	int i = 0;
	LinkedNode<T>* srcNode = src->m_head;
	while (srcNode != NULL)
	{
		insertNode(srcNode->m_data, i++);
		srcNode = srcNode->m_next;
	}
}

template<class T>
KsoString<T>::~KsoString()
{
	// �������ͷ�
	while (m_head != NULL)
	{
		LinkedNode<T>* temp = m_head;
		m_head = m_head->m_next;
		delete temp;
	}
}

template<class T>
void KsoString<T>::insertNode(const T& data, int position)
{
	// �������λ��Ϊͷ������m_headָ��ָ��ýڵ�
	// �����ҵ�Ҫ����λ�õ�ǰһ������ٲ���
	if (position >= 0 && position <= m_size)
	{
		if (position == 0)
		{
			m_head = new LinkedNode<T>(data, m_head);
		}
		else
		{
			LinkedNode<T>* tempNode = selectPointer(position - 1);
			LinkedNode<T>* newNode = new LinkedNode<T>(data, tempNode->m_next);
			tempNode->m_next = newNode;
		}
		m_size++;
		cout << "������ֵposition = " << position << "��λ�ò���Ԫ�أ�" << data << endl;
	}
	else
	{
		cout << "����ֵ���Ϸ���position = " << position << ", size = " << m_size << endl;
	}
}

template<class T>
void KsoString<T>::deleteNode(int position)
{
	if (checkIegal(position))
	{
		LinkedNode<T>* temp;
		if (position == 0)
		{
			temp = m_head;
			m_head = m_head->m_next;
		}
		else
		{
			LinkedNode<T>* point = selectPointer(position - 1);
			temp = point->m_next;
			point->m_next = temp->m_next;
		}
		char res = temp->m_data;
		delete temp;
		cout << "ɾ������ֵposition = " << position << "��Ԫ�أ�" << res << endl;
		m_size--;
	}
	else
	{
		cout << "����ֵ���Ϸ���position = " << position << ", size = " << m_size << endl;
	}
}

template<class T>
void KsoString<T>::updataNode(const T& data, int position)
{
	if (checkIegal(position))
	{
		LinkedNode<T>* tempNode = selectPointer(position);
		tempNode->m_data = data;
		cout << "�� position = " << position << "��ֵ��Ϊ " << data << endl;
	}
	else
	{
		cout << "����ֵ���Ϸ���position = " << position << ", size = " << m_size << endl;
	}
}

template<class T>
int KsoString<T>::getSize()
{
	return m_size;
}

template<class T>
T KsoString<T>::selectNode(int position)
{
	if (checkIegal(position))
	{
		LinkedNode<T>* tempNode = selectPointer(position);
		return tempNode->m_data;
	}
	else
	{
		cout << "����ֵ���Ϸ���position = " << position << ", size = " << m_size << endl;
		return NULL;
	}
}

template<class T>
bool KsoString<T>::empty()
{
	return m_size == 0;
}

template<class T>
T& KsoString<T>::operator[](int position)
{
	if (checkIegal())
	{
		LinkedNode<T>* tempNode = selectPointer(position);
		return tempNode->m_data;
	}
	else
	{
		cout << "����ֵ���Ϸ���position = " << position << ", size = " << m_size << endl;
		return '0';
	}
}

template<class T>
void KsoString<T>::printList()
{
	LinkedNode<T>* tempNode = m_head;
	while (tempNode != NULL)
	{
		cout << tempNode->m_data << "->";
		tempNode = tempNode->m_next;
	}
	cout << "NULL" << endl;
}

template<class T>
LinkedNode<T>* KsoString<T>::selectPointer(int position)
{
	LinkedNode<T>* tempNode = m_head;
	for (int i = 0; i < position && tempNode != NULL; i++)
		tempNode = tempNode->m_next;
	return tempNode;
}

template<class T>
bool KsoString<T>::checkIegal(int position)
{
	if (position > m_size - 1 || position < 0)
		return false;
	else
		return true;
}