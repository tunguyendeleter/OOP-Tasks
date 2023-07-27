#include "SinhVien.h"

SinhVien::SinhVien()
{
    HoTen = "Ho Ten";
    MSSV = "";
    DLT = 10;
    DTH = 10;
}

SinhVien::~SinhVien()
{
    // khong co pointers
}

SinhVien::SinhVien(string MSSV)
{
    this->MSSV = MSSV;
    HoTen = "Ho Ten";
    DLT = 10;
    DTH = 10;
}

SinhVien::SinhVien(string MSSV, string HoTen)
{
    this->MSSV = MSSV;
    this->HoTen = HoTen;
    DLT = 10;
    DTH = 10;
}

SinhVien::SinhVien(string MSSV, string HoTen, int DLT, int DTH)
{
    this->MSSV = MSSV;
    this->HoTen = HoTen;
    this->DLT = DLT;
    this->DTH = DTH;
}

SinhVien::SinhVien(string MSSV, string HoTen, Ngay ngaysinh)
{
    this->MSSV = MSSV;
    this->HoTen = HoTen;
    this->ngaysinh = ngaysinh;
    DLT = 10;
    DTH = 10;
}

SinhVien::SinhVien(string MSSV, string HoTen, Ngay ngaysinh, int DLT, int DTH)
{
    this->MSSV = MSSV;
    this->HoTen = HoTen;
    this->ngaysinh = ngaysinh;
    this->DLT = DLT;
    this->DTH = DTH;
}

SinhVien::SinhVien(string MSSV, string HoTen, int nam, int thang, int ngay, int DLT, int DTH)
{
    this->MSSV = MSSV;
    this->HoTen = HoTen;
    this->DLT = DLT;
    this->DTH = DTH;
    this->ngaysinh.SETTER_ngay(ngay);
    this->ngaysinh.SETTER_thang(thang);
    this->ngaysinh.SETTER_nam(nam);
}

SinhVien::SinhVien(const SinhVien &sv)
{
    this->MSSV = sv.MSSV;
    this->HoTen = sv.HoTen;
    this->ngaysinh = sv.ngaysinh;
    this->DLT = sv.DLT;
    this->DTH = sv.DTH;
}

void SinhVien::Xuat()
{
    cout << "\nHo Ten: " << HoTen;
    cout << "\nMSSV: " << MSSV;
    cout << "\nNgay sinh: ";
    ngaysinh.Xuat();
    cout << "\nDLT: " << DLT;
    cout << "\nDTH: " << DTH;
}
