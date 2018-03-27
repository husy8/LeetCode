// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr)
    {}
};

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        if (l1 == nullptr)
        {
            return l2;
        } else if (l2 == nullptr)
        {
            return l1;
        }
        ListNode *Result = new ListNode(0);
        ListNode *Current = Result;
        while (l1 != nullptr && l2 != nullptr)
        {
            if (l1->val <= l2->val)
            {
                Current->next = l1;
                l1 = l1->next;
            } else
            {
                Current->next = l2;
                l2 = l2->next;
            }
            Current = Current->next;
        }
        if (l1 == nullptr)
        {
            Current->next = l2;
        } else
        {
            Current->next = l1;
        }
        return Result->next;
    }
};