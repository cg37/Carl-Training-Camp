#include "head.h"
class Solution {
public:
    int maxDepth = INT_MIN;
    int res;
    void traversal(TreeNode* root, int depth) {
        if (root->left == NULL && root->right == NULL) {
            if(depth > maxDepth) {
                maxDepth = depth;
                res = root->val;
            }
            return;
        }
        if (root->left) {
            depth++;
            traversal(root->left, depth);
            depth--;
        }
        if (root->right) {
            depth++;
            traversal(root->right, depth);
            depth--;
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        traversal (root, 0);
        return res;
    }
}; 