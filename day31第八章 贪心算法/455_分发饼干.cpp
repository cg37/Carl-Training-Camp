
#include "head.h"
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());   //胃口
        sort(s.begin(), s.end());   //饼干
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
///
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(), s.end());   //胃口
        sort(g.begin(), g.end());   //饼干
        int index = 0;
        for(int i = 0; i < s.size(); i++) {
            if (index < g.size() && g[index] <= s[i]) {
                index++;
            }
        }
        return index;
    }
};