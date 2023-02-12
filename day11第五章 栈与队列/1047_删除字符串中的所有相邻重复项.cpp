#include "head.h"
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char &chr: s) {
            if (st.empty() || st.top() != chr) {
                st.push(chr);
            }
            else {
                st.pop();
            }
        }
        string ans = "";
        while (!st.empty()) {
            ans = ans + st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
///字符串为栈
class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        for (char S : s) {
            if(s.empty() || S != ans.back()) {
                ans.push_back(S);
            }
            else {
                ans.pop_back();
            }
        }
        return ans;
    }
};