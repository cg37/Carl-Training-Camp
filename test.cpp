#include "head.h"

template <typename T>
T add(T a, T b) {
    return a + b;
}
int main() {
    string a = "hello";
    string b = " world";
    cout<<add(1,2)<<endl;
    cout<<add(a, b)<<endl;
    cout<<add(1.2, 2.0)<<endl;
}

