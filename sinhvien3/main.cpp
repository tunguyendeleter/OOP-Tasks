#include "SinhVien.h"

int main()
{
    SinhVien a;
    a.Xuat();
    cout << "\n------------";
    SinhVien b("1264132");
    b.Xuat();
    cout << "\n------------";
    SinhVien c("1264132", "Nguyen Ngoc Tu");
    c.Xuat();
    cout << "\n------------";

    SinhVien d("1264132", "Nguyen Ngoc Tu", 7, 8);
    d.Xuat();
    cout << "\n------------";
    Ngay ngaysinh(1990, 2, 3);
    SinhVien e("1264132", "Nguyen Ngoc Tu", ngaysinh);
    e.Xuat();
    cout << "\n------------";
    SinhVien f("1264132", "Nguyen Ngoc Tu", ngaysinh, 7, 8);
    f.Xuat();
    cout << "\n------------";
    SinhVien g("1264132", "Nguyen Ngoc Tu", 1990, 2, 3, 7, 8);
    g.Xuat();
    cout << "\n------------";
    SinhVien h(g);
    h.Xuat();

    return 0;
}