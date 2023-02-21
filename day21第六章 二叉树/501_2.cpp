#include "head.h"
class Solution {
private:
    int maxCount = 0;
    int count = 0;
    TreeNode* pre = NULL;
    vector<int> res;
    void traversal(TreeNode* cur) {
        if(cur == NULL) return;
        traversal(cur->left);  //left
        if(pre == NULL) {
            count = 1;
        } else if(pre->val == cur->val) {
            count++;
        } else if(pre->val != cur->val) {
            count = 1;
        }
        pre = cur;
        if (count = maxCount) {
            res.push_back(cur->val);
        }
        if (count>maxCount) {
            maxCount = count;
            res.clear();
            res.push_back(cur->val);
        }
        traversal(cur->right);//right
        return;
    }
public:
    vector<int> findMode(TreeNode* root) {
        count = 0;
        maxCount = 0;
        TreeNode* pre = NULL;
        res.clear();
        traversal(root);
        return res;
    }
};