#include "PhanSo.h"

int main()
{
    PhanSo ps1, ps2;
    ps1.Nhap();
    ps1.Xuat();
    ps2.Nhap();
    ps2.Xuat();
    cout << "\nTong = ";
    PhanSo Tong = ps1.TinhTong(ps2);
    Tong.Xuat();
    cout << "\nHieu = ";
    PhanSo Hieu = ps1.TinhHieu(ps2);
    Hieu.Xuat();
    cout << "\nTich = ";
    PhanSo Tich = ps1.TinhTich(ps2);
    Tich.Xuat();
    cout << "\nThuong = ";
    PhanSo Thuong = ps1.TinhThuong(ps2);
    Thuong.Xuat();

    return 0;
}