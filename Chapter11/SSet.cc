#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    set<int> myset;
    set<int>::iterator it;
    pair<set<int>::iterator, bool> ret;
    for (int i=1; i<=5; ++i) myset.insert(i*10);

    ret = myset.insert(20);

    if (ret.second==false) it=ret.first;

    cout << *it << "\n";


}