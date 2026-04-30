#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class MyQueue {
    stack<int> s1, s2;

    public:
    
    void push(int data) {
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(data);

        while(!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop() {
        int ans = s1.top();
        s1.pop();
        return ans;
    }

    int front() {
        return s1.top();
    }

    bool empty() {
        return s1.empty();
    }
};

int main() {
    MyQueue q;

    q.push(1);
    q.push(2);
    q.push(3);

    // cout << s.top() << endl; // 3

    // s.pop();
    // cout << s.top() << endl; // 2

    // s.push(4);
    // cout << s.top() << endl; // 4

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    

    return 0;
}