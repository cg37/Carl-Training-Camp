#include "head.h"
class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i = 0; i<s.size(); i = i + 2*k) {
            if(i + k <= s.size()) {
                reverse(s.begin() + i, s.begin()+i+k);
            } else {
                reverse(s.begin()+i,s.end());
            } //剩余字符小于k
        }
    }
};

//不使用库函数，自己写reverse;
class Solution_1{
public:
    void reverse(string &s, int start, int end) {
        for(int i = start, j = end; i < j; i++, j--) {
            swap(s[i],s[j]);
        }
    }
    string reverseStr(string s, int k) {
        for(int i = 0; i<s.size(); i = i + 2 * k) {
            if (i + k <= s.size()) {
                reverse(s, i, i + k - 1);
                continue;
            } else {
                reverse(s, i, s.size()-1);
            }
        }
        return s;
    }
};