#include "TamGiac.h"

void TamGiac::Nhap()
{
    bool check;
    do
    {
        cout << "\nNhap A: ";
        A.Nhap();
        cout << "\nNhap B: ";
        B.Nhap();
        cout << "\nNhap C: ";
        C.Nhap();
        check = this->KiemTraTamGiacHopLe();
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
    if ((AB + BC <= CA) || (AB + CA <= BC) || (CA + BC <= AB))
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
    return CA + BC + AB;
}

// tinh duong cao AH trong tam giac ABC
float TamGiac::TinhDuongCaoTamGiac()
{
    float AB = A.TinhKhoangCach(B);
    float BC = B.TinhKhoangCach(C);
    float CA = C.TinhKhoangCach(A);
    float NuaChuVi = (AB + BC + CA) / 2;
    cout << "\nAB = " << AB;
    cout << "\nBC = " << BC;
    cout << "\nCA = " << CA;
    cout << "\nP = " << NuaChuVi;
    float DuongCao = 2 * (sqrt(NuaChuVi * (NuaChuVi - AB) * (NuaChuVi - BC) * (NuaChuVi - CA)) / BC);
    cout << "\nAH = " << DuongCao;
    return DuongCao;
}

float TamGiac::TinhDienTich()
{
    float DuongCao = this->TinhDuongCaoTamGiac();
    float BC = B.TinhKhoangCach(C);
    float DienTich = (DuongCao * BC) / 2;
    return DienTich;
}