#include "NhanVien.h"

NhanVien::NhanVien()
{
}

NhanVien::~NhanVien()
{
}

void NhanVien::NhapNhanVien()
{
    fflush(stdin);
    cout << "\nNhap ho ten: ";
    getline(cin, HoTen);
    cout << "\nNhap ma so: ";
    getline(cin, MaSo);
    cout << "\nNhap ngay sinh: ";
    getline(cin, NgaySinh);
    cout << "\nNhap dia chi: ";
    getline(cin, DiaChi);
}

void NhanVien::XuatNhanVien()
{
    cout << "\nHo ten: " << HoTen;
    cout << "\nMa so: " << MaSo;
    cout << "\nNgay sinh: " << NgaySinh;
    cout << "\nDia chi: " << DiaChi;
}

double NhanVien::TinhLuong()
{
    return 0;
}