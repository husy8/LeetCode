#include "../Unity/TreeNode.hpp"

class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (p != nullptr && q != nullptr)
        {
            return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        } else
        { return p == nullptr && q == nullptr; }
    }
};