#include "head.h"
class Solution {
private:
public:
    int candy(std::vector<int>& ratings) {
         std::vector<int> candyVec(ratings.size(), 1); //每个小孩分到的糖果
        //std::vector<int> ratings;  //每个小孩的评分
        //从前向后
        for (int i = 1;i < ratings.size(); i++){
            if (ratings[i] > ratings[i - 1]) {       // ratings[i] 大于 左边
                candyVec[i] = candyVec[i - 1] + 1;
            }
        }

        for(int i = ratings.size() - 2; i >= 0; i--){ //ratings[i] 大于 右边
            if (ratings[i] > ratings[i + 1]) {
                candyVec[i] = std::max(candyVec[i],candyVec[i+1] + 1);
            }
        }
        //统计结果
        int res = 0;
        for (int i = 0; i < candyVec.size(); i++) {
            res = res + candyVec[i];
        }
        return res;
    }
};