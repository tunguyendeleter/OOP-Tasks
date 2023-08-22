#include "PhanSo.h"

int main()
{
    PhanSo a(1, 2), b(3, 4), c(5, 6), d(7, 8);
    // PhanSo Tong = a.TinhTong(b);
    PhanSo Tong = a + b + c + d;
    cout << "\na + b + c + d = ";
    Tong.Xuat();
    Tong = a + 2;
    cout << "\na + 2 = ";
    Tong.Xuat();
    Tong = a + 2;
    cout << "\n2 + a = ";
    Tong.Xuat();

    cout << "\n";
    // toan tu nhap xuat
    PhanSo ps1;
    // cin >> ps1;
    // cout << ps1;

    ifstream FileIn("INPUT.txt");
    FileIn >> ps1;

    ofstream FileOut("OUTPUT.txt");
    FileOut << ps1;
    cout << ps1;

    FileIn.close();
    FileOut.close();

    a += b;
    cout << "\na + b = ";
    a.Xuat();
    return 0;
}