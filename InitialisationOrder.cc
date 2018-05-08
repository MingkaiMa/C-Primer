#include <iostream>

//首先初始化基类的部分，然后按照生命的顺序依次初始化派生类的成员 C++ primer: P531
struct X {
    X() {std::cout << "X() ";}
};

struct Y {
    Y() {std::cout << "Y() ";}
};

class A {
    X x;
public:
    A() {std::cout << "A() ";}
};

class B: public A {
    Y y;
public:
    B() {std::cout << "B() ";}
};

int main() {
    B b;
}