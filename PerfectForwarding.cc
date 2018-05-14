#include <iostream>
#include <utility>

void overloaded(const int& x) { std:: cout << "[lvalue]";}
void overloaded(int&& x) { std:: cout << "[rvalue]";}

template <class T> void foo(T&& x) {
    overloaded(x);
    overloaded(std::forward<T>(x));
}

int main()
{
    int a;
    std:: cout << "calling foo with lvalue: ";
    foo(a);
    std::cout << std::endl;
    std::cout << "calling foo with rvalue: ";
    foo(0);
    std::cout << std::endl;
}