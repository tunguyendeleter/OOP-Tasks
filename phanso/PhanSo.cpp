#include "PhanSo.h"

int TinhUCLN(int TuSo, int MauSo)
{
    // if (TuSo < 0)
    //     TuSo *= -1;
    // int max = TuSo > MauSo ? TuSo : MauSo;
    // int min = TuSo < MauSo ? TuSo : MauSo;
    // if (max % min == 0)
    // {
    //     return min;
    // }
    // for (int i = min / 2; i > 1; i--)
    // {
    //     if (TuSo % i == 0)
    //     {
    //         if (MauSo % i == 0)
    //         {
    //             return i;
    //         }
    //     }
    // }
    // return 1;

    // bi kip giang ho
    if (TuSo < 0)
        TuSo *= -1;
    while (TuSo != MauSo)
    {
        if (TuSo > MauSo)
        {
            TuSo -= MauSo;
        }
        else
        {
            MauSo -= TuSo;
        }
    }
    return MauSo;
}

void PhanSo::Nhap()
{
    cout << "\nNhap tu so: ";
    cin >> TuSo;
    do
    {
        cout << "\nNhap mau so: ";
        cin >> MauSo;
        if (MauSo == 0)
        {
            cout << "\nMau so khong hop le";
        }

    } while (MauSo == 0);
}
void PhanSo::Xuat()
{
    cout << "\nPhan so: ";
    if (MauSo < 0)
    {
        MauSo *= -1;
        TuSo *= -1;
    }
    int UCLN = TinhUCLN(TuSo, MauSo);
    TuSo /= UCLN;
    MauSo /= UCLN;
    cout << TuSo << "/" << MauSo;
}
int PhanSo::AmhayDuong()
{
    if (TuSo * MauSo < 0)
    {
        return 0;
    }
    return 1;
}
PhanSo PhanSo::TinhTong(PhanSo ps)
{
    PhanSo Tong;
    Tong.TuSo = this->TuSo * ps.MauSo + this->MauSo * ps.TuSo;
    Tong.MauSo = this->MauSo * ps.MauSo;
    return Tong;
}
PhanSo PhanSo::TinhHieu(PhanSo ps)
{
    PhanSo Hieu;
    Hieu.TuSo = this->TuSo * ps.MauSo - this->MauSo * ps.TuSo;
    Hieu.MauSo = this->MauSo * ps.MauSo;
    return Hieu;
}
PhanSo PhanSo::TinhTich(PhanSo ps)
{
    PhanSo Tich;
    Tich.TuSo = this->TuSo * ps.TuSo;
    Tich.MauSo = this->MauSo * ps.MauSo;
    return Tich;
}
// ps1/ps2 = ps1 * 1/ps2
PhanSo PhanSo::TinhThuong(PhanSo ps)
{
    PhanSo Thuong;
    Thuong.TuSo = ps.MauSo;
    Thuong.MauSo = ps.TuSo;
    return Thuong.TinhTich(*this);
}
