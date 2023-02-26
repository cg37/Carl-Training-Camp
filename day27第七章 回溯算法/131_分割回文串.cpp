#include "head.h"

class Solution {
private: 
    vector<string> path;
    vector<vector<string> > res;
    bool isPalindrome(const string& s, int start, int end) {
        for (int i = start, j = end; i < j; i++, j--) {
            if(s[i] != s[j]) {
                return false;
            }
        }
        return true;
    }
    void backTracking(const string& s, int startIndex) {
        if (startIndex >= s.size()) {
            res.push_back(path);
            return;
        }
        for (int i = startIndex; i < s.size(); i++) {
            if (isPalindrome(s, startIndex, i)) {
                string str = s.substr(startIndex, i - startIndex + 1);
                path.push_back(str);
            } else {
                continue;
            }
            backTracking(s, i+1);
            path.pop_back();
        }
    }
public:
    vector<vector<string>> partition(string s) {
        res.clear();
        path.clear();
        backTracking(s, 0);
        return res;
    }
};