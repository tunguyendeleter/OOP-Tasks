#ifndef __NHANVIEN__
#define __NHANVIEN__

#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
protected: // class con co the truy xuat => ke thua
    string MaSo;
    string HoTen;
    string NgaySinh;
    string DiaChi;
    int id; // id = 1 (cong nhat), id = 2 (san xuat), id = 3 (quan ly)

public:
    int Getter_id();
    void Setter_id(int);
    string Getter_maso();
    void Setter_maso(string);
    virtual void NhapNhanVien();
    virtual void XuatNhanVien();
    virtual double TinhLuong(); // mac dinh la khong co luong
    NhanVien();
    virtual ~NhanVien(); // xoa class cha truoc
};

#endif