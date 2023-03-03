#include "head.h"
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int k=0; k < nums.size(); k++) {

            if(nums[k] > target && nums[k] >= 0) {  //剪枝
                break;
            }
            if(k > 0 && nums[k] == nums[k-1]) {     //去重
                continue;
            }
            for(int i = k+1; i < nums.size(); i++) {
                if (nums[k] + nums[i] >= 0 && nums[k] + nums[i] > target) {
                    break; // 剪枝
                }
                if(i > k + 1 && nums[i] == nums[i - 1]) {
                    continue; // 去重
                }
                int left = i + 1;
                int right = nums.size() - 1;
                while(left<right) {
                    if((long) nums[k] + nums[i] + nums[left] + nums[right] > target) {
                        right--;
                    } 
                    else if((long) nums[k] + nums[i] + nums[left] + nums[right] < target) {
                        left ++;
                    }
                    else {
                        ans.push_back(vector<int>{nums[k], nums[i], nums[left], nums[right]});
                        while(left < right && nums[right] == nums[right - 1]){
                            right--;
                        }
                        while(left < right && nums[left] == nums[left+1]) {
                            left++;
                        }
                        right--;
                        left++;
                    }
                }
            }
        }
        return ans;
    }
};