#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int* p1 = &x;
    int* p2 = p1;
    p1 = nullptr;

    cout << *p2 << endl;
    cout << *p1 << endl;
}