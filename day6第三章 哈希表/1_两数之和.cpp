#include "head.h"

class Solution {
public:
    //暴力解法
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i = 0; i<nums.size()-1;i++) {
            for(int j = i+1; j<nums.size();j++) {
                if (nums[i]+nums[j]==target) {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
    //哈希法 map
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map <int, int> map;
        vector<int> ans;
        for(int i = 0; i<nums.size(); i++) {
            int s = target - nums[i];
            auto iter = map.find(s);
            if (iter != map.end()) {
                ans.push_back(iter->second); //dirst key, second value
                ans.push_back(i);
                return ans;
            }
            map.insert(nums[i],i);
        }
        return {};
    }
};