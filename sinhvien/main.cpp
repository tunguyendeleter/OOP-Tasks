#include <iostream>
#include <string>
using namespace std;

class NgaySinh
{
private:
    int ngay, thang, nam;

public:
    void Nhap()
    {
        cout << "\nNhap ngay: ";
        cin >> ngay;
        cout << "\nNhap thang: ";
        cin >> thang;
        cout << "\nNhap nam: ";
        cin >> nam;
    }
    void Xuat()
    {
        cout << "\nNgay: " << ngay << " Thang: " << thang << " Nam: " << nam;
    }
};

class HocSinh
{
private:
    string Ten;
    float DiemToan, DiemVan;
    NgaySinh ngaysinh;

public:
    void Nhap()
    {
        fflush(stdin);
        cout << "\nNhap ten: ";
        getline(cin, Ten);
        ngaysinh.Nhap();
        cout << "\nNhap diem Toan:";
        cin >> DiemToan;
        cout << "\nNhap diem Van:";
        cin >> DiemVan;
    }
    void Xuat()
    {
        cout << "\nTen: " << Ten;
        ngaysinh.Xuat();
        cout << "\nDiem Toan: " << DiemToan;
        cout << "\nDiem Van: " << DiemVan;
    }
    float TinhTrungBinh()
    {
        return (DiemToan + DiemVan) / 2;
    }
};

int main()
{
    HocSinh hs1;
    hs1.Nhap();
    hs1.Xuat();
    float diemtb = hs1.TinhTrungBinh();
    cout << "\nDiem trung binh: " << diemtb;
    return 0;
}