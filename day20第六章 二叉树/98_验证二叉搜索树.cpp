#include "head.h"
class Solution {
private:
    vector<int> vec;
    void traversal (TreeNode* root) {
        if (root == NULL) return;
        traversal(root->left);
        vec.push_back(root->val);
        traversal(root->right);
    }
public:
    bool isValidBST(TreeNode* root) {
        vec.clear();
        traversal(root);
        for(int i = 1; i < vec.size(); i++) {
            if(vec[i] <= vec[i-1]) return false;
        }
        return true;
    }
    long long maxval = LONG_MIN;
    bool isValidBST(TreeNode* root) {
        if (root == NULL) return true; 

        bool left = isValidBST(root->left);
        if (maxval < root->val) {
            maxval = root->val;
        }
        else return false;
        bool right = isValidBST(root->right);
        return left && right;
    }
    TreeNode* pre = NULL;
    bool isValidBST(TreeNode* root) {
        if(root == NULL) return true;
        bool left = isValidBST(root->left);
        if(pre != NULL && pre->val >= root->val) return false;
        pre = root;
        bool right = isValidBST(root->right);
        return left && right;
    }
};