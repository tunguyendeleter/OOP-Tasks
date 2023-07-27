#pragma once
#include <iostream>
using namespace std;

class Ngay
{
private:
    int ngay, thang, nam;
public:
    Ngay();                                 // defalt constructor
    Ngay(int nam, int thang, int ngay);     // constructor with params
    ~Ngay();                                // destructor
    void Nhap();
    void Xuat();
    void SETTER_ngay(int ngay);
    void SETTER_thang(int thang);
    void SETTER_nam(int nam);
};
