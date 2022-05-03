#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

template<class T>
struct LinkedNode
{
	T m_data;

	LinkedNode<T>* m_next;

	LinkedNode(const T& data)
	{
		m_data = data;
		m_next = NULL;
	}

	LinkedNode(const T& data, LinkedNode<T>* next)
	{
		m_data = data;
		m_next = next;
	}
};

#endif // !_LINKED_LIST_H_

