#include <queue>
using namespace std;
class MyStack {
public:
    queue<int> que1;
    queue<int> que2
    MyStack() {

    }
    
    void push(int x) {
        que1.push();
    }
    
    int pop() {
        int size = que1.size();
        size = size - 1;
        while (size--) {
            que2.push(queq.front());
            que1.pop();
        }
        int ans = que1.front();
        que1.pop();
        que1 = que2;
        while(!que2.empty()) {
            que2.pop();
        }
        return ans;
    }
    
    int top() {
        return que1.back();
    }
    
    bool empty() {
        return que1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */