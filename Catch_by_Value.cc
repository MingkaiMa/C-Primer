#include <iostream>

class X {
public:
    X() {std::cout << "X constructed" << std::endl;}
    X(const X& x) {std::cout << "X copy-constructed" << std::endl;}
    ~X() {std::cout << "X destructed" << std::endl;}
};

void g() {
    throw X{};
}

void f(){

    try {
        g();

    } catch (X x) {
        std::cout << "caught in fl rethrow" << std::endl;
        throw;
    }
}

int main() {
    try {
        f();
    } catch (X x) {
        std::cout << "caught in main" << std::endl;
    }
}