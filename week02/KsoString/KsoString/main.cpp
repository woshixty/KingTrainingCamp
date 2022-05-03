#include <iostream>
#include <vector>
#include "KsoString.h"
#include "KsoString.cpp"

using namespace std;

class Test
{
public:
    Test();
    ~Test();
    char makeAndGet(char array[], int position) {
        KsoString<char>* s = new KsoString<char>(array, sizeof(array) / sizeof(array[0]));
        return s->selectNode(position);
    }
private:

};

Test::Test()
{
}

Test::~Test()
{
}

int main()
{
    // KsoString<int>* test = new KsoString<int>();
    // 数组构造
    char array[] = { '1', '2', '3' };
    KsoString<char>* s = new KsoString<char>(array, 3);
    s->printList();
    // 增
    s->insertNode('a', 0);
    s->printList();

    s->insertNode('b', 2);
    s->printList();

    s->insertNode('c', s->getSize());
    s->printList();
    // 删
    s->deleteNode(0);
    s->printList();
    // 改
    s->updataNode('f', 0);
    s->printList();

    cout << "运算符重载" << sizeof(s[0]) << sizeof(char) << endl;
    // 拷贝构造
    KsoString<char>* s2 = new KsoString<char>(s);
    s2->printList();

    // 遍历
    for (int i = 0; i < s2->getSize(); i++)
    {
        cout << s2->selectNode(i) << " ";
    }
}