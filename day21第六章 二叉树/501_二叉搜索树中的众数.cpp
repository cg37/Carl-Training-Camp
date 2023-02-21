#include "head.h"
class Solution {
private:
    void searchBST(TreeNode* cur, unordered_map<int,int>& map) {
        if (cur == NULL) return;
        map[cur->val]++;
        searchBST(cur->left, map);
        searchBST(cur->right, map);
        return;
    }
bool static cmp (const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}
public:
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> map;
        vector<int> res;
        if (root == NULL) return res;
        searchBST(root, map);
        vector<pair<int, int>> vec(map.begin(), map.end());
        sort(vec.begin(), vec.end(), cmp);
        res.push_back(vec[0].first);
        for(int i = 1; i < vec.size(); i++) {
            if (vec[i].second == vec[0].second) res.push_back(vec[i].first);
            else break;
        }
        return res;
    }
};