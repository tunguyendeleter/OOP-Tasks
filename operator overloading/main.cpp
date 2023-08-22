#include "PhanSo.h"

int main()
{
    // PhanSo a(1, 2), b(3, 4), c(5, 6), d(7, 8);
    // // PhanSo Tong = a.TinhTong(b);
    // PhanSo Tong = a + b + c + d;
    // cout << "\na + b + c + d = ";
    // Tong.Xuat();
    // Tong = a + 2;
    // cout << "\na + 2 = ";
    // Tong.Xuat();
    // Tong = a + 2;jhghujghjhghj
    // cout << "\n2 + a = ";
    // Tong.Xuat();

    // cout << "\n";
    // // toan tu nhap xuat
    // PhanSo ps1;
    // // cin >> ps1;
    // // cout << ps1;

    // ifstream FileIn("INPUT.txt");
    // FileIn >> ps1;

    // ofstream FileOut("OUTPUT.txt");
    // FileOut << ps1;
    // cout << ps1;

    // FileIn.close();
    // FileOut.close();

    // a += b;
    // cout << "\na + b = ";
    // a.Xuat();

    PhanSo ps1, ps2;
    cin >> ps1;
    cin >> ps2;
    cout << "\nps1 + ps1 = " << ps1 + ps2;
    cout << "\nps1 - ps1 = " << ps1 - ps2;
    cout << "\nps1 * ps1 = " << ps1 * ps2;
    cout << "\nps1 / ps1 = " << ps1 / ps2;
    cout << "\n1 + ps1 = " << 1 + ps1;
    cout << "\n1 - ps1 = " << 1 - ps1;
    cout << "\n1 * ps1 = " << 1 * ps1;
    cout << "\n1 / ps1 = " << 1 / ps1;
    if (ps1 < ps2)
    {
        cout << "\nps1 < ps2";
    }
    else if (ps1 > ps2)
    {
        cout << "\nps1 > ps2";
    }
    else if (ps1 == ps2)
    {
        cout << "\nps1 == ps2";
    }
    // ps1 += ps2;
    // cout << "\nps1 += ps2 = " << ps1;

    cout << "\n++ps1 = " << ++ps1;
    cout << "\nps1 = " << ps1;

    return 0;
}