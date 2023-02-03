//209 长度最小的子数组
//C 暴力解法
#include <iostream>
#include <vector>
using namespace std;

int minSubArrayLen(int target, int* nums, int numSize) {
    int minLength = INT_MAX;
    int sum;
    int left, right;
    for(left = 0; left<numSize; left++) {
        sum=0;
        for(right = left; right<numSize; right++) {
            sum = sum + nums[right];
            if(sum>=target) {
                int sublength=right - left +1;
                minLength = minLength<sublength?minLength:sublength;
            }
        }
    }
    return minLength == INT_MAX?0:minLength;
}

//CPP滑动窗口

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum  = 0;
        int left = 0;
        int right = 0;
        int sublen = 0; //滑动窗口的长度
        int ans = INT_MAX;
        for(; right<nums.size(); right++) {
            sum = sum + nums[right];
            while (sum >= target) {
                sublen = right - left + 1;
                //ans = min(ans,sublen);
                ans = ans < sublen? ans : sublen;
                sum = sum - nums[left++];
            }
        }
        return ans==INT_MAX?0:ans;
    }
};