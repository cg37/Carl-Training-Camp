#include "head.h"

class Solution {
private:
    vector<string> res;
    void backTracking(string& s, int startIndex,int pointNum) {
        if(pointNum == 3) {
            if(isValid(s, startIndex, s.size()-1)) {
                res.push_back(s);
            }
            return;
        }
        for (int i = startIndex; i < s.size(); i++) {
            if(isValid(s, startIndex, i)) {
                s.insert(s.begin() + i + 1, '.');
                pointNum++;
                backTracking(s, i+2, pointNum);
                pointNum--;
                s.erase(s.begin() + i + 1);
            }
            else {
                break;
            }
        }
    }

    bool isValid(const string& s, int start, int end) {
        if (start > end) {
            return false;
        }
        if(s[start] == '0' && start !=end) {
            return false;
        }
        int num = 0;
        for (int i = start; i <=end; i++) {
            if(s[i] > '9' || s[i] <'0') {
                return false;
            }
            num = num * 10 + (s[i] - '0');
            if (num > 255) {
                return false;
            }
        }
        return true;
    }
public:
    vector<string> restoreIpAddresses(string s, int start, int end) {
        res.clear();
        if(s.size() < 4 || s.size() > 12) {
            return res;
        }
        backTracking(s, 0, 0);
        return res;
    }
};