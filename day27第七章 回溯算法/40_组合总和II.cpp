#include "head.h"

class Solution {
private:
    vector<vector<int> > res;
    vector<int> path;
    void backTracking(  vector<int>& candidates, 
                        int targetSum, 
                        int sum, 
                        int startIndex, 
                        vector<bool>& used) {
        if (sum > targetSum) {
            return;
        }
        if (sum == targetSum) {
            res.push_back(path);
            return;
        }
        for (int i = startIndex; i < candidates.size(); i++) {
            if(i > 0 && candidates[i] == candidates[i - 1] && used[i - 1] == false) {
                continue;
            }
            sum = sum + candidates[i];
            path.push_back(candidates[i]);
            used[i] = true;
            backTracking(candidates, targetSum, sum, i + 1, used);
            used[i] = false;
            sum = sum - candidates[i];
            path.pop_back();
        }

    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<bool> used(candidates.size(), false);
        res.clear();
        path.clear();
        sort(candidates.begin(), candidates.end());
        backTracking(candidates, target, 0, 0, used);
        return res;
    }
};