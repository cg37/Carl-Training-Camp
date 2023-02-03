#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int len = nums.size()-1;
        vector<int> ans(nums.size(), 0);
        for(int i = 0, j = nums.size()-1; i <= j;) {
            if((nums[i] * nums[i]) < (nums[j] * nums[j])) {
                ans[len--] = nums[j] * nums[j];
                j--;
            } 
            else {
                ans[len--] = nums[i] * nums[i];
                i++;
            }
        }
        return ans;
    }
};