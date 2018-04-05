#include "../Unity/ListNode.hpp"

class Solution {
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == nullptr || head->next == nullptr || k <= 0)
        {
            return head;
        }

        unsigned int size = 0;
        auto NewHead = head;
        while (NewHead != nullptr)
        {
            ++size;
            NewHead = NewHead->next;
        }
        k %= size;
        if (k == 0)
        {
            return head;
        }

        NewHead = head;
        auto LastNode = head;
        while (k != 0)
        {
            LastNode = LastNode->next;
            --k;
        }
        while (LastNode->next != nullptr)
        {
            NewHead = NewHead->next;
            LastNode = LastNode->next;
        }

        auto temp = NewHead->next;
        NewHead->next = nullptr;
        LastNode->next = head;
        return temp;
    }
};