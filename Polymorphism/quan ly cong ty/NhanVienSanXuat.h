#pragma once
#include "NhanVien.h"

class NhanVienSanXuat : public NhanVien
{
private:
    int SoSanPham;
public:
    void NhapNhanVien();
    // void XuatNhanVien();
    double TinhLuong();
    NhanVienSanXuat();
    ~NhanVienSanXuat();
};
