#include "head.h"
class Solution {
public:
    int getnum(int n) {
        int sum = 0;
        while(n) {
            sum = sum + (n % 10) * (n % 10);
            n= n / 10;
        }
        return sum;

    }
    bool isHappy(int n) {
        int sum = getnum(n);
        unordered_set<int> set;
        while(1) {
            int sum = getnum(n);
            if (sum ==1) {
                return true;
            }
            if (set.find(sum) == set.end()) {
                return false;
            } else {
                set.insert(sum);
            }
            n = sum;
        }
    }
};