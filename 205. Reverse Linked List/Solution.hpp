#include <stack>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr)
    {}
};

class Solution {
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *temp = head;
        std::stack<int> si;
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
};