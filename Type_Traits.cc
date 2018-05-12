#include <iostream>
#include <limits>
#include <type_traits>

template <typename T>
T findMax(const T* data, int numItems) {

    T currLargest = std::numeric_limits<T>::min();

    for(int i = 0; i < numItems; ++i)
    {
        if(data[i] > currLargest)
            currLargest = data[i];
    }

    return currLargest;
}

template <typename T> struct is_void {
    static const bool val = false;
};

template <> struct is_void <void> {
    static const bool val = true;
};

template <typename T> struct is_ptr {
    static const bool val = false;
};

template <typename T> struct is_ptr<T*> {
    static const bool val = true;
};


template <typename T>
void testIfNumberType(T i) {
    if(std::is_integral<T>::value || std::is_floating_point<T>::value) {
        std::cout << i << " is a number" << std::endl;
    }
    else {
        std::cout << i << " is not a number" << std::endl;
    }
}
int main()
{
    int iArray[] = {-1, -3, -2};
    std::cout << findMax(iArray, 3) << std::endl;
    unsigned int iUArray[] = {1, 3, 2};
    std::cout << findMax(iUArray, 3) << std::endl;
    float fArray[] = {4.1, 4.3, 4.2};
    std::cout << findMax(fArray, 3) << std::endl;

    std::cout << is_void<int>::val << std::endl;
    std::cout << is_void<void>::val << std::endl;

    std::cout << is_ptr<int*>::val << std::endl;
    std::cout << is_ptr<int>::val << std::endl;

    int i = 6;
    long l = 7;
    double d = 3.14;
    testIfNumberType(i);
    testIfNumberType(l);
    testIfNumberType(d);
    testIfNumberType(123);
    testIfNumberType("Hello");
    std::string s = "World";
    testIfNumberType(s);
}