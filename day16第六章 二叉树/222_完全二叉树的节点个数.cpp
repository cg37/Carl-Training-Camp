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
    int countNodes(TreeNode* root) {
        return getNum(root);
    }
    int getNum(TreeNode* node) {
        if (node == NULL) return 0;
        int leftnum = getNum(node->left);
        int rightnum = getNum(node->right);
        int result = leftnum + rightnum + 1;
        return result;
    }
};