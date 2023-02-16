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
    int maxDepth(TreeNode* root) {
        int res;
        res = getheight(root);
        return res;
    }
    int getheight (TreeNode* Node) {
        if(Node == NULL) return 0;
        int leftheight = getheight(Node->left);
        int rightheight = getheight(Node->right);
        int height = 1 + max(leftheight, rightheight);
        return height;
        // return 1+max(getheight(Node->left),getheight(Node->right));
    }
};