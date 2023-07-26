#include "NgaySinh.h"

void NgaySinh::Nhap()
{
    cout << "\nNhap ngay: ";
    cin >> ngay;
    cout << "\nNhap thang: ";
    cin >> thang;
    cout << "\nNhap nam: ";
    cin >> nam;
}
void NgaySinh::Xuat()
{
    cout << "\nNgay " << ngay << " thang " << thang << " nam " << nam;
}