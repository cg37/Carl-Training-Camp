#include <vector>
#include <iostream>
using namespace std;

class solution {
    public:
    int removeElemet(vector<int>& nums, int val) {
        int size = nums.size(); //size 可能为1
        for (int i=0;i<size;i++) { 
            if (nums[i] == val) {
                for (int j=i+1; j<size; j++) {
                    nums[i] = nums[j]; 
                }
                i--;
                size--;
            }
            
        }
        return size;
    }
    int removeElemet_1(vector<int>& nums, int val) {
        int len = nums.size(); //size 可能为1
        int slow = 0;
        for (int fast = 0; fast < len; fast++) { 
            if (nums[fast] != val) {
                nums[slow] = nums[fast];
                slow++;
            }
        }
        return slow;
    }
}