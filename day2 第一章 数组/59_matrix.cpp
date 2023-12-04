#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n,0));
        int start_x = 0, start_y = 0;
        int i = 0, j = 0;
        int offset = 1;
        int count = 1;
        int loop = n/2;
        int mid = n/2;
        while(loop--) { // 
            for (j = start_y; j < n - offset; j++) {
                ans[start_x][j] = count++;
            }
            for (i = start_x; i < n - offset; i++) {
                ans[i][j] = count ++;
            }
            for (; j > start_y; j--) {
                ans[i][j] = count ++;
            }
            for (; i > start_x; i--) {
                ans[i][j] = count ++;
            }
            start_x++;
            start_y++;
            offset = offset + 1;
        }
        
        if(n%2==1) {
            ans[n/2][n/2] = n*n;
        }
        return ans;
    }
};