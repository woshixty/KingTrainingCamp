
// -------------------------------------------------------
// linklist.cpp
// 创建者： xty
// 创建时间： 2022/4/25
// 功能描述： 链表翻转问题
// Copyright 2022 Kingsoft
// --------------------------------------------------------
#include<iostream>;
using namespace std;

// 链表结点的定义
struct LinkNode 
{
    int val;
    LinkNode* next;
    LinkNode() : val(0), next(nullptr) 
    {
    }
    LinkNode(int x) : val(x), next(nullptr) 
    {
    }
    LinkNode(int x, LinkNode* next) : val(x), next(next) 
    {
    }
};

class KLinkSolution 
{
public:
    KLinkSolution();
    ~KLinkSolution();

    LinkNode* reverseKGroup(LinkNode* head, int k) 
    {
        // 修复k值异常情况
        // k 如果大于链表长度无需处理，默认不会处理
        if (k < 0) 
        {
            cout << "K值一场==异常" << endl;
            return head;
        }
        // 该指针变量用作缓存
        LinkNode* temp = head;
        int sum = 0;
        // 统计链表节点数
        while (temp != nullptr) 
        {
            sum++;
            temp = temp->next;
        }
        // 题目未规定链表的长度，因判断链表长度至少为2才进行翻转操作
        if (sum < 2)
            return head;
        // 前一组翻转链表的尾节点
        LinkNode* pre = new LinkNode(0, head);
        LinkNode* newHead = pre;
        LinkNode* left = nullptr;
        LinkNode* right = nullptr;
        // sum / k 会向下取整，循环次数即为需要翻转的组数
        for (int i = 0; i < sum / k; i++) 
        {
            left = pre->next;
            right = left->next;
            for (int j = 1; j < k; j++) 
            {
                temp = left;
                left = right;
                right = right->next;
                left->next = temp;
            }
            // 以下操作将上一组的尾节点指向下一组的头节点，并给pre赋值为当前链表组的尾节点
            temp = pre->next;
            temp->next = right;
            pre->next = left;
            pre = temp;
        }
        return newHead->next;
    }

    // 创建链表
    LinkNode* createList(int array[], int len)
    {
        LinkNode* head = nullptr;
        LinkNode* point = nullptr;
        for (int i = 0; i < len; i++)
        {
            LinkNode *currentNode = new LinkNode(array[i], nullptr);
            if (head == nullptr) 
            {
                head = point = currentNode;
            }
            else
            {
                point->next = currentNode;
                point = point->next;
            }
        }
        return head;
    }

    // 打印链表
    void printList(LinkNode* head)
    {
        while (head != nullptr) 
        {
            cout << head->val << "->";
            head = head->next;
        }
        cout << "nullptr" << endl;
    }

    // 删除链表
    void deleteList(LinkNode* head)
    {
        while (head != nullptr)
        {
            LinkNode* temp = head;
            head = head->next;
            cout << "删除 " << temp->val << endl;
            delete temp;
        }
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
    // 测试代码
    KLinkSolution* solution = new KLinkSolution();
    int array[] = {1,2,3,4,5,6,7};
    LinkNode*  head = solution->createList(array, sizeof(array) / sizeof(array[0]));
    solution->printList(head);
    head = solution->reverseKGroup(head, 3);
    solution->printList(head);
    solution->deleteList(head);
}