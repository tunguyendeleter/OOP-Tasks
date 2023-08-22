#include <iostream>
using namespace std;

template <class tunguyendeleter>
void HoanVi(tunguyendeleter &a, tunguyendeleter &b)
{
    tunguyendeleter temp = a;
    a = b;
    b = temp;
}

int main()
{
    string as = "tu";
    string bs = "ngoc";
    float a = 5.5, b = 10.5;

    HoanVi<float>(a, b);
    cout << "\na = " << a;
    cout << "\nb = " << b;

    HoanVi<string>(as, bs);
    cout << "\na = " << as;
    cout << "\nb = " << bs;
    return 0;
}
//