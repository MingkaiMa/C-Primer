#include <iostream>

template<int n> struct Factorial {
    static const long val = Factorial<n - 1>::val * n;
};

template<> struct Factorial<0> {
    static const long val = 1;
};

int main() {
    std::cout << Factorial<4>::val << std::endl;
}