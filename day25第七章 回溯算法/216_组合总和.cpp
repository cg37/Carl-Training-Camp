#include "head.h"
class Solution {
private:
    vector<int> path;
    vector<vector<int> > res;
    void backTracking (int targetSum, int k, int sum, int startIndex) {
        if (sum > targetSum) {
            return;
        }
        if (path.size() == k) {
            if (sum == targetSum) {
                res.push_back(path);
            }
            return;
        }
        for (int i = startIndex; i <= 9 - (k - path.size()) + 1; i++) {
            sum = sum + i;
            path.push_back(i);
            backTracking(targetSum, k, sum, i + 1);
            sum = sum - i;
            path.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        path.clear();
        res.clear();
        backTracking(n, k, 0, 1);
        return res;
    }
};