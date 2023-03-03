/**
 * @param {number[]} g
 * @param {number[]} s
 * @return {number}
 */
#include "head.h"
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());//
        sort(s.begin(), s.end());
        int index = s.size() - 1;
        int res = 0;
        for (int i = g.size() - 1; i >= 0; i--) {
            if (index >=0 && s[index] >= g[i]) {
                res++;
                index--;
            }
        }
        return res;
    }
};