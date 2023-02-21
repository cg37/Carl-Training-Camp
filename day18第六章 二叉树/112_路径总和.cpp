#include "head.h"
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return false;
        return(traversal(root, targetSum - root->val));
    }
private:
    bool traversal(TreeNode* cur, int count){
        if(cur->left == NULL && cur->right ==NULL && count == 0) {
            return true;
        }
        if(cur->left==NULL && cur->right==NULL && count != 0) {
            return false;
        }
        if (cur->left) {
            count = count - cur->left->val;
            if (traversal(cur->left,count)) return true;
            count = count + cur->left->val;
        }
        if (cur->right) {
            count = count - cur->right->val;
            if (traversal(cur->right,count)) return true;
            count = count + cur->right->val;
        }
        return false;
    }
};