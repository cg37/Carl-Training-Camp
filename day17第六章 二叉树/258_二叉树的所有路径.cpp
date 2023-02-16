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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        vector<int> path;
        if(root == NULL) return res;
        traversal(root, path, res);
        return res;
    }
private: 
    void traversal(TreeNode* cur, vector<int>& path, vector<string>& res) {
        path.push_back(cur->val);
        if (cur->left == NULL && cur->right == NULL){
            string spath;
            for(int i = 0; i< path.size() - 1; i++) {
                spath = spath + to_string(path[i]);
               spath = spath + "->";
            }
            spath = spath + to_string(path[path.size()-1]);
            res.push_back(spath);
            return;
        }
        if(cur->left) {
            traversal(cur->left, path, res);
            path.pop_back();
        }
        if(cur->right) {
            traversal(cur->right, path, res);
            path.pop_back();
        }
    }
};