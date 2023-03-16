#include "head.h"

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0, twenty = 0;
        for(int bill : bills){
            if (bill == 5) { 
                five++;
            }
            if (bill == 10) {
                ten++;
                five--;
            }
            if (bill == 20) {
                if (five > 0 && ten > 0) {
                    five--;
                    ten--;
                    twenty++;
                }
                else if (five > 3) {
                    five = five - 3;
                    twenty++;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};
