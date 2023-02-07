#include "head.h"

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> map_ab;
        int len = nums1.size();
        for(int a:nums1) {
            for (int b:nums2) {
                map_ab[a+b]++;
            }
        }
        int count = 0;
        for(int c:nums3) {
            for(int d: nums4) {
                int temp = 0-(c+d);
                if(map_ab.find(temp) != map_ab.end()) {
                    count = count + map_ab[temp];
                }
            }
        }
        return count;
    }
};

//暴力解法
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(auto &i:magazine) {
            for(auto &j:ransomNote) {
                if(i==j) {
                    ransomNote.erase(j);
                    break;
                }
            }
        }
        if(ransomNote.size() == 0) {
            return true;
        }
        return false;
    }
};