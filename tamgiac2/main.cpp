#include "TamGiac.h"

int main()
{
    TamGiac tg;
    tg.Nhap();
    tg.Xuat();
    float ChuVi = tg.TinhChuVi();
    float DienTich = tg.TinhDienTich();
    cout << "\nChu Vi Tam Giac = " << ChuVi;
    cout << "\nDien Tich Tam Giac = " << DienTich;
    return 0;
}