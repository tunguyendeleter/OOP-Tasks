#include "NhanVienSanXuat.h"

NhanVienSanXuat::NhanVienSanXuat()
{
}

NhanVienSanXuat::~NhanVienSanXuat()
{
}

void NhanVienSanXuat::NhapNhanVien()
{
    NhanVien::NhapNhanVien(); // goi nhap cua class cha
    do
    {
        cout << "\nNhap so san pham: ";
        cin >> SoSanPham;
        if (SoSanPham < 0)
        {
            cout << "\nSo san pham khong hop le";
        }
    } while (SoSanPham < 0);
    id = 2;
}

void NhanVienSanXuat::XuatNhanVien()
{
    NhanVien::XuatNhanVien();
    cout << "\nSo san pham: " << SoSanPham;
}

double NhanVienSanXuat::TinhLuong()
{
    return SoSanPham * 20000;
}