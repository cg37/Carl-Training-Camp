#include "head.h"
class Solution {
private:
    const string letterMap[10] = {
        "",
        "",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz",
    };
    vector<string> res;
    string s;
    void backTracking(const string& digits, int index) {
        if (index == digits.size()) {
            res.push_back(s);
            return;
        }
        int digit = digits[index] - '0';
        string letters = letterMap[digit];

        for (int i = 0; i < letters.size(); i++) {
            s.push_back(letters[i]);
            backTracking(digits, index + 1);
            s.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        s.clear();
        res.clear();
        if (digits.size() == 0) {
            return res;
        }
        backTracking(digits, 0);
        return res;
    }
};