#include "head.h"
class Solution {
private:
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == NULL || root->val == val) return root;
        TreeNode* res = NULL;
        if (val < root->val) {
            res = searchBST(root->left, val);
        }
        if (val > root->val) {
            res = searchBST(root->right, val);
        }
        return res;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        while (root!=NULL) {
            if (val < root->val) {
                root = root->left;
            }
            else if (val > root->val) {
                root = root->right;
            }
            else 
                return root;
        }
        return NULL;
    }
};