#include<iostream>
#include<stack>
#include<utility>
using namespace std;

class MinStack {
    stack<pair<int, int>> s;

public:
    void push(int val) {
        if(s.empty()) {
            s.push({val, val});
        } else {
            int minVal = min(val, s.top().second);
            s.push({val, minVal});
        }
    }

    void pop() {
        if(!s.empty()) {
            s.pop();
        }
    }

    int top() {
        return s.top().first;
    }

    int getMin() {
        return s.top().second;
    }
};

int main() {
    MinStack st;

    st.push(5);
    st.push(3);
    st.push(7);

    cout << "Top: " << st.top() << endl;
    cout << "Min: " << st.getMin() << endl;

    st.pop();

    cout << "Top after pop: " << st.top() << endl;
    cout << "Min after pop: " << st.getMin() << endl;

    return 0;
}