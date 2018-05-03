#include <iostream>
#include <string>

class MyString {
public:
    MyString(const char* s) : str(s) {std::cout << "here1" << std::endl;}
    MyString(const MyString& rhs) : str{rhs.str} {std::cout << "here2" << std::endl;}
private:
    std::string str;
};

int main() {
    MyString s1{"abc"};
    MyString s2 = "ebd";
}