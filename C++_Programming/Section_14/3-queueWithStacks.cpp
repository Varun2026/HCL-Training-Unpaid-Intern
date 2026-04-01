#include <iostream>
#include <stack>

class Queue {
private:
    std::stack<int> s1, s2;
public:
    void push(int x) {
        s1.push(x);
    }
    int pop() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (s2.empty()) return -1;
        int x = s2.top();
        s2.pop();
        return x;
    }
};

int main() {
    Queue q;
    q.push(1);
    q.push(2);
    std::cout << q.pop() << std::endl;
    return 0;
}