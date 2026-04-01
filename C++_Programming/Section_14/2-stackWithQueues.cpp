#include <iostream>
#include <queue>

class Stack {
private:
    std::queue<int> q1, q2;
public:
    void push(int x) {
        q1.push(x);
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
        std::swap(q1, q2);
    }
    int pop() {
        if (q2.empty()) return -1;
        int x = q2.front();
        q2.pop();
        return x;
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    std::cout << s.pop() << std::endl;
    return 0;
}