#include "head.h"
class Solution {
private:
    vector<vector<int> > res;
    vector<int> path;

    void backTracking(vector<int>& candidates, 
                                int targetSum, 
                                int sum, 
                                int startIndex) {
        if (sum > targetSum) {
            return;
        }
        if (sum == targetSum){
            res.push_back(path);
            return;
        }
        for (int i = startIndex; i < candidates.size(); i++) {
            path.push_back(candidates[i]);
            sum = sum + candidates[i];
            backTracking(candidates, targetSum, sum, i);
            sum = sum - candidates[i];
            path.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        res.clear();
        path.clear();
        sort(candidates.begin(), candidates.end());
        backTracking(candidates, target, 0, 0);
        return res;
    }
};