#include "head.h"

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> ans_set;
        unordered_set<int> nums1_set(nums1.begin(),nums1.end());//做去重
        for(int i = 0; i < nums2.size(); i++) {
            if(nums1_set.find(nums2[i]) != nums1_set.end()) {
                ans_set.insert(nums2[i]);
            }
        }
        return vector<int>(ans_set.begin(),ans_set.end());
    }
};