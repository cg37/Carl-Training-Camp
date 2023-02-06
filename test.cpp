#include <iostream>
#include <vector>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {

    // vector<int> nums{2,2,2,2,2,2,2,2,2,2,2,1,3,4,4};
    // unordered_set<int> ans_set(nums.begin(),nums.end());
    // // for (auto iter = ans_set.begin(); iter != ans_set.end(); ++iter) {
    // //     cout << *iter << endl;
    // // }
    // for(int i = 0; i<ans_set.begin(); i++) {
    //     cout<<*i<<endl;
    // }
    int  n = 11111;
    int sum = 0;
    while (n) {
        sum = sum + (n % 10) * (n % 10);
        cout<<"n%10 = "<<n%10<<endl;
        cout<<"sum_1 = "<<sum<<endl;
        n = n/10;
        cout<<"n = "<<n<<endl;
    }
    cout<<"sum = "<<sum<<endl;
    return 0;

}