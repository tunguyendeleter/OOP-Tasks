#ifndef __NHANVIENQUANLY__
#define __NHANVIENQUANLY__

#include "NhanVien.h"

class NhanVienQuanLy : public NhanVien
{
private:
    float HeSoLuong;
    float LuongCanBan;

public:
    void NhapNhanVien();
    void XuatNhanVien();
    double TinhLuong();
    NhanVienQuanLy();
    ~NhanVienQuanLy();
};

#endif