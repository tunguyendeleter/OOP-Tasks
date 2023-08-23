#include "NhanVienQuanLy.h"

NhanVienQuanLy::NhanVienQuanLy()
{
}

NhanVienQuanLy::~NhanVienQuanLy()
{
}

void NhanVienQuanLy::NhapNhanVien()
{
    NhanVien::NhapNhanVien(); // goi nhap cua class cha
    do
    {
        cout << "\nNhap he so luong: ";
        cin >> HeSoLuong;
        if (HeSoLuong < 0)
        {
            cout << "\nSo san pham khong hop le";
        }
    } while (HeSoLuong < 0);
    do
    {
        cout << "\nNhap luong can ban: ";
        cin >> LuongCanBan;
        if (LuongCanBan < 0)
        {
            cout << "\nSo san pham khong hop le";
        }
    } while (LuongCanBan < 0);
    id = 3;
}

void NhanVienQuanLy::XuatNhanVien()
{
    NhanVien::XuatNhanVien();
    cout << "\nHe so luong: " << HeSoLuong;
    cout << "\nLuong can ban: " << (size_t)LuongCanBan;
}

double NhanVienQuanLy::TinhLuong()
{
    return HeSoLuong * LuongCanBan;
}

