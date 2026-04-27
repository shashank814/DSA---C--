#include<iostream>
#include<vector>
#include<list>
using namespace std;


// stack in arr
// class Stack {
// public:
//     int v[3];
//     int topIndex = -1;
//     void push(int val) {
//         if(topIndex < 2) {
//             v[++topIndex] = val;
//         }
//     }
//     int top() {
//         return v[topIndex];
//     }
//     void pop() {
//         topIndex--;
//     }
//     bool empty() {
//         return topIndex == -1;
//     }
// };


// // stack in vector
// class Stack {
//     public:
//     vector<int> v;

//     int push(int val) {
//         v.push_back(val);
//     }

//     int top() {
//         return v[v.size()-1];
//     }

//     void pop() {
//         v.pop_back();
//     }

//     bool empty() {
//         return v.size() == 0;
//     }
// };


// stack in list
class Stack {
    list<int> ll;

    public:
    void push(int val) {
        ll.push_front(val);
    }

    int top() {
        return ll.front();
    }

    void pop() {
        return ll.pop_front();
    }

    bool empty() {
        return ll.size() == 0;
    }
};


int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
