#include<iostream>
using namespace std;

// 链表结点的定义
struct LinkNode {
    int val;
    LinkNode* next;
    LinkNode() : val(0), next(nullptr) {}
    LinkNode(int x) : val(x), next(nullptr) {}
    LinkNode(int x, LinkNode* next) : val(x), next(next) {}
};

class KLinkSolution {
public:
    KLinkSolution();
    ~KLinkSolution();

    LinkNode* reverseKGroup(LinkNode* head, int k) {
        //...
    }

private:

};

KLinkSolution::KLinkSolution()
{
}

KLinkSolution ::~KLinkSolution()
{
}

int main()
{
    std::cout << "Hello World!\n";
}