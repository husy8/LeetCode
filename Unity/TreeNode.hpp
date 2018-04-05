#ifndef LEETCODE_TREENODE_HPP
#define LEETCODE_TREENODE_HPP

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr)
    {}
};

#endif //LEETCODE_TREENODE_HPP