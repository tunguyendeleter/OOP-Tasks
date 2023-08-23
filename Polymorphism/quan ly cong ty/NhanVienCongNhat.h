#ifndef __NHANVIENCONGNHAT__
#define __NHANVIENCONGNHAT__

#include "NhanVien.h"

class NhanVienCongNhat : public NhanVien
{
private:
    int SoNgayCong;
public:
    void NhapNhanVien();
    void XuatNhanVien();
    double TinhLuong();
    NhanVienCongNhat();
    ~NhanVienCongNhat();
};

#endif
