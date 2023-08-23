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

int NhanVien::Getter_id()
{
    return id;
}

void NhanVien::Setter_id(int i)
{
    id = i;
}

string NhanVien::Getter_maso()
{
    return MaSo;
}

void NhanVien::Setter_maso(string i)
{
    MaSo = i;
}