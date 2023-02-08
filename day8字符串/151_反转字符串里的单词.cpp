#include "head.h"
class Solution {
public:
    
        void reverse(string &s, int start, int end){
            for(int i = start, j = end; i < j; i++, j--) {
                swap(s[i], s[j]);
            }
        }
        void removeExtraSpaces(string &s) {
            int slow = 0;
            for(int fast = 0; fast<s.size(); fast++) { //
                if(s[fast] != ' ') {
                    if(slow != 0) {
                        s[slow] = ' ';
                        slow = slow + 1;
                    }
                    while(s[fast] != ' ' && fast < s.size()) {
                        s[slow] = s[fast];
                        slow++;
                        fast++;
                    }  
                }
            }
            s.resize(slow);
        }
        string reverseWords(string s) {
            removeExtraSpaces(s);
            reverse(s, 0, s.size()-1);
            int start = 0;
            for(int i = 0; i <= s.size(); i++) {
                if(i == s.size() || s[i]==' ') {
                    reverse(s, start, i-1);
                    start = i + 1;
                }
            }
            return s;
        }
};