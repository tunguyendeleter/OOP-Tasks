#include "Ngay.h"
#include <string>

class SinhVien
{
private:
    string MSSV;
    string HoTen;
    Ngay ngaysinh;
    int DLT, DTH;

public:
    SinhVien();                   // default constructor
    SinhVien(const SinhVien &sv); // copy constructor
    SinhVien(string MSSV);
    SinhVien(string MSSV, string HoTen);
    SinhVien(string MSSV, string HoTen, int DLT, int DTH);
    SinhVien(string MSSV, string HoTen, Ngay ngaysinh);
    SinhVien(string MSSV, string HoTen, Ngay ngaysinh, int DLT, int DTH);
    SinhVien(string MSSV, string HoTen, int ngay, int thang, int nam, int DLT, int DTH);
    ~SinhVien();
    void Xuat();
};
