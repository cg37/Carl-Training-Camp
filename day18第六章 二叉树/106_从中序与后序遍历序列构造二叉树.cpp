#include "head.h"
class Solution {
public:
    TreeNode* buildTree (vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size() == 0 || postorder.size() == 0) return NULL;
        return traversal(inorder, postorder);
    }
private:
    TreeNode* traversal (vector<int>& inorder, vector<int>& postorder) {
        if (postorder.size()==0) return NULL;
        int rootvalue = postorder[postorder.size()-1];
        TreeNode* root = new TreeNode(rootvalue);
        if(postorder.size() ==1) return root;

        int delimiterIndex;
        for (delimiterIndex = 0; delimiterIndex < inorder.size(); delimiterIndex++) {
            if(inorder[delimiterIndex] == rootvalue) {
                break; 
            }
        }
        vector<int> leftInorder(inorder.begin(),inorder.begin()+delimiterIndex);
        vector<int> rightInorder(inorder.begin()+delimiterIndex + 1, inorder.end());

        postorder.resize(postorder.size()-1);

        vector<int> leftpostorder(postorder.begin(), postorder.begin() + leftInorder.size());
        vector<int> rightPostorder(postorder.begin() + leftInorder.size(), postorder.end());

        root->left = traversal(leftInorder, leftpostorder);
        root->right = traversal(rightInorder, rightPostorder);
        return root;
    }
};