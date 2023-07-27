#include "Ngay.h"
Ngay::Ngay()
{
    ngay = 1;
    thang = 1;
    nam = 1990;
}
Ngay::~Ngay()
{
    // no pointers
}
Ngay::Ngay(int nam, int thang, int ngay)
{
    this->ngay = ngay;
    this->thang = thang;
    this->nam = nam;
}

void Ngay::Nhap()
{
    cout << "\nNhap ngay: ";
    cin >> ngay;
    cout << "\nNhap thang: ";
    cin >> thang;
    cout << "\nNhap nam: ";
    cin >> nam;
}

void Ngay::Xuat()
{
    cout << "ngay " << ngay << " thang " << thang << " nam " << nam;
}

void Ngay::SETTER_ngay(int ngay)
{
    this->ngay = ngay;
}

void Ngay::SETTER_thang(int thang)
{
    this->thang = thang;
}

void Ngay::SETTER_nam(int nam)
{
    this->nam = nam;
}