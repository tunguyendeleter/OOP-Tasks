#include "TamGiac.h"

void TamGiac::Nhap()
{
    bool check;
    do
    {
        cout << "\nNhap diem A: ";
        A.Nhap();
        cout << "\nNhap diem B: ";
        B.Nhap();
        cout << "\nNhap diem C: ";
        C.Nhap();
        check = KiemTraTamGiacHopLe();
        if (!check)
        {
            cout << "\nTam giac khong hop le";
        }
    } while (!check);
}

void TamGiac::Xuat()
{
    cout << "\nA";
    A.Xuat();
    cout << "\nB";
    B.Xuat();
    cout << "\nC";
    C.Xuat();
}

bool TamGiac::KiemTraTamGiacHopLe()
{
    float AB = A.TinhKhoangCach(B);
    float BC = B.TinhKhoangCach(C);
    float CA = C.TinhKhoangCach(A);
    if (((AB + BC) <= CA) || ((CA + BC) <= AB) || ((AB + CA) <= BC)) // phan chung minh
    {
        return false;
    }
    return true;
}

float TamGiac::TinhChuVi()
{
    float AB = A.TinhKhoangCach(B);
    float BC = B.TinhKhoangCach(C);
    float CA = C.TinhKhoangCach(A);
    return AB + BC + CA;
}
// he thuc heron => tinh dien tich tam giac
float TamGiac::TinhDienTich()
{
    float AB = A.TinhKhoangCach(B);
    float BC = B.TinhKhoangCach(C);
    float CA = C.TinhKhoangCach(A);
    float p = (AB + BC + CA) / 2; // nua chu vi tam giac
    float S = sqrt(p * (p - AB) * (p - BC) * (p - CA));
    return S;
}