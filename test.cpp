#include "head.h"
class Solution
{
private:
    static bool cmp(int a, int b) {
        return abs(a) > abs(b);
    }
public:
    vector<int> numssort(vector<int> nums){
        sort(nums.begin(), nums.end(), cmp);
        return nums;
    }
};
int main(){
    vector<int> nums{-1, -2, -3, 0 ,1 ,2 ,3};
    nums = Solution().numssort(nums);
    for (int i=0; i < nums.size(); i++) {
        cout<<nums[i]<<endl;
    }
}

