#include "NhanVienCongNhat.h"

NhanVienCongNhat::NhanVienCongNhat()
{
}

NhanVienCongNhat::~NhanVienCongNhat()
{
}

void NhanVienCongNhat::NhapNhanVien()
{
    NhanVien::NhapNhanVien(); // goi nhap cua class cha
    do
    {
        cout << "\nNhap so ngay cong: ";
        cin >> SoNgayCong;
        if (SoNgayCong < 0)
        {
            cout << "\nSo san pham khong hop le";
        }
    } while (SoNgayCong < 0);
    id = 1;
}

void NhanVienCongNhat::XuatNhanVien()
{
    NhanVien::XuatNhanVien();
    cout << "\nSo ngay cong: " << SoNgayCong;
}

double NhanVienCongNhat::TinhLuong()
{
    return SoNgayCong * 55000;
}
