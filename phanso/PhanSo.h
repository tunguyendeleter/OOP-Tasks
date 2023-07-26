#include <iostream>
using namespace std;

class PhanSo
{
private:
    int TuSo, MauSo;

public:
    void Nhap();
    void Xuat();
    int AmhayDuong();
    PhanSo TinhTong(PhanSo ps);
    PhanSo TinhHieu(PhanSo ps);
    PhanSo TinhTich(PhanSo ps);
    PhanSo TinhThuong(PhanSo ps);
};