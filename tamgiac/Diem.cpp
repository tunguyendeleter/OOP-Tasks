#include "Diem.h"

void Diem::Nhap()
{
    cout << "\nNhap X = ";
    cin >> x;
    cout << "\nNhap Y = ";
    cin >> y;
}
void Diem::Xuat()
{
    cout << "(" << x << "," << y << ")";
}

float Diem::TinhKhoangCach(Diem d2)
{
    return sqrt(pow(x - d2.x, 2) + pow(y - d2.y, 2));
}