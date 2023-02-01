#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) { //左闭友闭
        int left = 0;
        int right = nums.size()-1; //左闭友闭
        while (left <= right) {
            int middle = (left + right) / 2;
            if (nums[middle] > target) {
                right = middle - 1; //闭区间
            }
            else if (nums[middle] < target) {
                left = middle + 1;
            }
            else if (nums[middle] = target) {
                return middle;
            }
        }
        return -1;
    }
    int search_2(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        while (left < right) {
            int middle = (left+right)/2;
            if(nums[middle] > target) {
                right = middle;
            }
            else if (nums[middle] < target) {
                left = middle + 1;
            }
            else if(nums[middle] == target) {
                return middle;
            }
        }
    return -1;
    }
};

void trimLeftTrailingSpaces(string &input) {
    input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
        return !isspace(ch);
    }));
}

void trimRightTrailingSpaces(string &input) {
    input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
        return !isspace(ch);
    }).base(), input.end());
}

vector<int> stringToIntegerVector(string input) {
    vector<int> output;
    trimLeftTrailingSpaces(input);
    trimRightTrailingSpaces(input);
    input = input.substr(1, input.length() - 2);
    stringstream ss;
    ss.str(input);
    string item;
    char delim = ',';
    while (getline(ss, item, delim)) {
        output.push_back(stoi(item));
    }
    return output;
}

int stringToInteger(string input) {
    return stoi(input);
}

int main() {
    string line;
    while (getline(cin, line)) {
        vector<int> nums = stringToIntegerVector(line);
        getline(cin, line);
        int target = stringToInteger(line);
        
        int ret = Solution().search(nums, target);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}