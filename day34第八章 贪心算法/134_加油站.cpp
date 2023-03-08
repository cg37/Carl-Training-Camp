#include "head.h"
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        for(int i = 0; i< cost.size(); i++) {
            int rest = gas[i] - cost[i];
            int index = (i + 1)%cost.size();
            while(rest > 0 && index != 1) {
                rest = rest + gas[index] - cost[index];
                index = (index + 1)%cost.size();
            }
            if (rest >= 0 && index == i) return i;
        }
        return -1;
    }
};