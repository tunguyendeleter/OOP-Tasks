#ifndef __NHANVIENSANXUAT__
#define __NHANVIENSANXUAT__

#include "NhanVien.h"

class NhanVienSanXuat : public NhanVien
{
private:
    int SoSanPham;

public:
    void NhapNhanVien();
    void XuatNhanVien();
    double TinhLuong();
    NhanVienSanXuat();
    ~NhanVienSanXuat();
};

#endif