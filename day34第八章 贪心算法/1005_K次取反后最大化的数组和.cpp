#include "head.h"
class Solution {
static bool cmp(int a, int b) {
    return abs(a) > abs(b);
}
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), cmp); //绝对值从大到小排序， 3， -3， -2， 2  1 0； 
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] < 0 && k > 0) {
                nums[i] = nums[i] * -1;
                k--;
            }
        }
        if (k % 2 == 1) {
            nums[nums.size() - 1] = nums[nums.size() - 1] * -1;
        }
        int res = 0;
        for (int i : nums) {
            res = res + i;
        }
        return res;
    }  
};