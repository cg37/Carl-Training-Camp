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
    int sumOfLeftLeaves(TreeNode* root) {
        stack<TreeNode*> st;
        if(root == NULL) return 0;
        st.push(root);
        int res = 0;
        while(!st.empty()) {
            TreeNode* node = st.top();
            st.pop();
            if(node->left != NULL && node->left->left==NULL && node->left->right == NULL){
                res = res + node->left->val;
            }
            if(node->right) st.push(node->right);
            if(node->left) st.push(node->left);
        }
        return res;
    }
};