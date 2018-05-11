#include <iostream>

class DebugDelete {
public:
    DebugDelete(std::ostream &s = std::cerr): os(s) {}
    template <typename T> void operator() (T *p) const
    { os << "deleting unique_ptr" << std::endl; delete p; }
private:
    std::ostream &os;
};


template <typename T> class Blob {
    template <typename It> Blob(It b, It e);
}

int main()
{
    double *p = new double;
    DebugDelete d;
    d(p);

    int* ip = new int;
    DebugDelete() (ip);
}