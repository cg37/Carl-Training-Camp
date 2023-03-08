#include "head.h"
//暴力解法
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = INT32_MIN;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            count = 0;
            for (int j = i; j < nums.size(); j++) {
                count = count + nums[j];
                res = count > res ? count : res;
            }
        }
        return res;
    }
};
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = INT32_MIN;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            count = count + nums[i];
            if(count > res) {
                res = count;
            }
            if (count<=0) count = 0;
        }
        return res;
    }
};