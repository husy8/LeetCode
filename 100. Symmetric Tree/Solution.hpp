#include "../Unity/TreeNode.hpp"

class Solution {
public:
    bool isSymmetric(TreeNode *root)
    {
        return isSymmetric(root, root);
    }

private:
    bool isSymmetric(TreeNode *PreorderRoot, TreeNode *AntiPreorderRoot)
    {
        if (PreorderRoot == nullptr && AntiPreorderRoot == nullptr)
        {
            return true;
        } else if (PreorderRoot == nullptr || AntiPreorderRoot == nullptr || PreorderRoot->val != AntiPreorderRoot->val)
        {
            return false;
        } else
        {
            return isSymmetric(PreorderRoot->left, AntiPreorderRoot->right) &&
                   isSymmetric(PreorderRoot->right, AntiPreorderRoot->left);
        }
    }
};