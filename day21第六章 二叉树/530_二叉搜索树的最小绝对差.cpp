#include "head.h"
class Solution {
private:
    vector<int> vec;
    void traversal(TreeNode* root) {
        if(root == NULL) return;
        traversal(root->left);
        vec.push_back(root->val);
        traversal(root->right);
    }
/*****************双指针****************/
    int res = INT_MAX;
    TreeNode* pre = NULL;
    void traversal_1(TreeNode* cur) {
       if (cur == NULL) {
            return;
       } 
    traversal_1(cur->left);
    if(pre != NULL) {
        res = min(res, cur->val-pre->val);
    }
    pre = cur;
    traversal_1(cur->right);
}
public:
    int getMinimumDifference(TreeNode* root) {
        vec.clear();
        traversal(root);
        if (vec.size() < 2) return 0;
        int result = INT_MAX;
        for (int i = 1; i < vec.size(); i++) {
            result = min(result, vec[i] - vec[i-1]);
        }
        return result;
    }
    int getMinimumDifference(TreeNode* root) {
        traversal_1(root);
        return res;
    }
};