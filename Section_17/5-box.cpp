#include <iostream>

template<typename T>
class Box {
private:
    T value;
public:
    Box(T v) : value(v) {}
    T get() { return value; }
    void reset(T v) { value = v; }
};

template<typename T>
class Box<T*> {
private:
    T* ptr;
public:
    Box(T* p) : ptr(p) {}
    T* get() { return ptr; }
    void reset(T* p) { ptr = p; }
};

int main() {
    Box<int> b(10);
    std::cout << b.get() << std::endl;
    int x = 20;
    Box<int*> bp(&x);
    std::cout << *bp.get() << std::endl;
    return 0;
}