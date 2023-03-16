#include "head.h"

void trimLeftTrailingSpaces(std::string &input) { //  去除左边空格
    input.erase(    
                    input.begin(),
                    find_if (
                                input.begin(),
                                input.end(),
                                [](int ch) {return !isspace(ch);}
                        )
    );
}
//isspace 空格, tab(\t),whitespaces (\n, \v, \f, \r) ;返回非空值
//

std::vector<int> stringToIntegerVector(std::string input) {
    std::vector<int> output;
    trimLeftTrailingSpaces(input);            //删除左开头空格
    input = input.substr(1,input.length()-2); //去除 首尾符号[]
    return output;
}

int main(){
    std::string line = "012345678";
    while (std::getline(std::cin, line)){
        std::vector<int> bills = stringToIntegerVector(line);
        line = line.substr(1,line.length()-2);
    }
    std::cout<<line<<std::endl;
}
