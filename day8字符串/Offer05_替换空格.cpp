#include "head.h"
class Solution {
public:
    string replaceSpace(string s) {
        //先统计空格的数量
        int spa_num = 0;
        int origin_len = s.size();
        for(int i = 0; i<s.size(); i++) 
        {
            if (s[i] == ' ') {
                spa_num++;
            }
        }
        s.resize(s.size()+spa_num*2);
        int re_len = s.size();
        for(int i = s.size() - 1,j = s.size() - 1; j < i; i--,j--) {
            if(s[j] != ' ') {
                s[i] = s[j];
            } else {
                s[i] = '0';
                s[i-1] = '2';
                s[i-2] = '%';
                i = i - 2;
            }
        }
        return s;
    }
};