#include <iostream>
#include <vector>
#include <string>
#include <vector>
using namespace std;
class Box{
public:
    int length;
    int width;

    Box operator+(const Box& box1) {
        this->length = this -> length + box1.length;
        this->width = this->width + box1.width;
    }
};

void function(){

}

int main(int argc, char** argv) {
    // string str1 = "hello world";
    // string input;
    // getline(cin,input);
    // cout<<input<<endl;
    // for(char ch : str1) {
    //     ch = toupper(ch);
    // }
    // cout<<str1<<endl;
    // vector<int> vec_int = {1,1,2}; //拷贝构造
    // vector<string> vec_str = {"123","234","szdf"}; //拷贝构造
    // vector<string> vec_str2{"123","234","szdf "}; //直接初始化
    // for(string str : vec_str2) {
    //     cout<<str<<endl;
    // }
    // cout<<vec_str[0]<<endl;
    // cout<<vec_str2.empty()<<endl;
    // str1.size();
    // vector<int> vec;
    // for (int i=0;i<100;i++) {
    //     vec.push_back(i);
    //     vec.emplace_back(i);
    // }
    // cout<<vec.size()<<endl;
    // cout<<(vec_str == vec_str2)<<endl;
    // vector<int> vec = {1,2,3};
    // for(auto it = vec.begin();it!=vec.end();it++) {
    //     cout<<*it<<endl;
    //     *it = 100;
    // }
    // cout<<vec[1]<<endl;
    // abastraction
    // vector<string> vec_str = {"hello", "world"};
    // for(auto it = vec_str.begin(); it != vec_str.end(); it++) {
    //     cout << it->size() <<endl; //*.==->解应用
    // }

    vector<int> path{1,2};
    cout<<path.size()<<endl;
}