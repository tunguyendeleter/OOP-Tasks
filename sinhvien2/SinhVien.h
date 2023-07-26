#include "NgaySinh.h"
#include <string>
using namespace std;

class SinhVien
{
private:
    string Ten;
    float DiemToan, DiemVan;
    NgaySinh ngay;

public:
    void Nhap();
    void Xuat();
    float TinhDiemTrungBinh();
};