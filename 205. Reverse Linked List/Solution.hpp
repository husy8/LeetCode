#include <stack>
#include "../Unity/ListNode.hpp"

class Solution {
public:
    ListNode *reverseList1(ListNode *head)
    {
        if (head == nullptr)
        {
            return head;
        }

        // 利用栈先进后出的特点将链表反转
        std::stack<int> si;
        ListNode *temp = head;
        while (temp != nullptr)
        {
            si.push(temp->val);
            temp = temp->next;
        }

        temp = head;
        while (temp != nullptr)
        {
            temp->val = si.top();
            si.pop();
            temp = temp->next;
        }

        return head;
    }

    ListNode *reverseList2(ListNode *head)
    {
        if (head == nullptr)
        {
            return head;
        }
        ListNode *Current = head->next;
        head->next = nullptr;
        while (Current != nullptr)
        {
            ListNode *Temp = Current->next;
            Current->next = head;
            head = Current;
            Current = Temp;
        }
        return head;
    }
};