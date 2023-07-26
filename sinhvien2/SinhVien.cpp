#include "SinhVien.h"

void SinhVien::Nhap()
{
    fflush(stdin);
    cout << "\nNhap ten: ";
    getline(cin, Ten);
    ngay.Nhap();

    cout << "\nDiem Toan: ";
    cin >> DiemToan;

    cout << "\nDiem Van: ";
    cin >> DiemVan;
}
void SinhVien::Xuat()
{
    cout << "\nTen: " << Ten;
    ngay.Xuat();
    cout << "\nDiem Toan: " << DiemToan;
    cout << "\nDiem Van: " << DiemVan;
}
float SinhVien::TinhDiemTrungBinh()
{
    return (DiemToan + DiemVan) / 2;
}