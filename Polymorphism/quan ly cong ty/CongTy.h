#ifndef __CONGTY__
#define __CONGTY__

#include "NhanVienCongNhat.h"
#include "NhanVienQuanLy.h"
#include "NhanVienSanXuat.h"
#include <vector>

class CongTy
{
private:
    vector<NhanVien *> List;

public:
    void NhapNhanVien();
    void XuatNhanVien();
    bool KiemTraTrungMaSo(string);
    double TinhTongLuongCongTy();
    void NhanVienCoLuongCaoNhat();
    double TinhLuongNhanVienCongNhat();
    CongTy();
    ~CongTy();
};

#endif