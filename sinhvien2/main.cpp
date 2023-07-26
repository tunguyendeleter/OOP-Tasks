#include "SinhVien.h"

int main()
{
    SinhVien sv1;
    sv1.Nhap();
    sv1.Xuat();
    float diemtb = sv1.TinhDiemTrungBinh();
    cout << "\nDiem Trung Binh: " << diemtb;
    return 0;
}