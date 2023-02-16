#include "head.h"
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int minDepth(TreeNode* root) {
        return getheight(root);
    }
    int getheight(TreeNode* node) {
        if (node == NULL) return 0;
        int leftheight = getheight(node->left);
        int rightheight = getheight(node->right);
        if(node->left == NULL && node->right != NULL) return 1+rightheight;
        if(node->left != NULL && node->right == NULL) return 1+leftheight;
        int result = 1 + min(leftheight, rightheight);
        return result;
    }
};