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
    bool isBalanced(TreeNode* root) {
        return getheight(root) == -1 ? false: true;
    }
private:
    int getheight(TreeNode* node) {
        if(node == NULL) return 0;
        int leftheight = getheight(node->left);
        if(leftheight == -1) return -1;
        int rightheight = getheight(node->right);
        if(rightheight == -1) return -1;
        int result = 0;
        if (abs(rightheight-leftheight)>1) return -1;
        else {
            result = 1 + max(rightheight, leftheight);
        }
        return result;
    }
};