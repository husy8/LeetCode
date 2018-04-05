#ifndef LEETCODE_LISTNODE_HPP
#define LEETCODE_LISTNODE_HPP

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr)
    {}
};

#endif //LEETCODE_LISTNODE_HPP