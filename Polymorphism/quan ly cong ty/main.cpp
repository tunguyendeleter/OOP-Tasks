#include "NhanVienSanXuat.h"

int main()
{
    NhanVien *nv;
    nv = new NhanVienSanXuat;
    nv->NhapNhanVien();
    nv->XuatNhanVien();
    cout << "\nTinh luong: " << nv->TinhLuong();
    return 0;
}