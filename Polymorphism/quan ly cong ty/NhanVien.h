#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
private:
    string MaSo;
    string HoTen;
    string NgaySinh;
    string DiaChi;

public:
    virtual void NhapNhanVien();
    virtual void XuatNhanVien();
    virtual double TinhLuong(); // mac dinh la khong co luong
    NhanVien();
    virtual ~NhanVien();    // xoa class cha truoc
};
