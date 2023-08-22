#include "PhanSo.h"

PhanSo::PhanSo()
{
    Tu = 0;
    Mau = 1;
}

PhanSo::~PhanSo() // giai phong con tro neu co
{
}

PhanSo::PhanSo(int a, int b)
{
    Tu = a;
    Mau = b;
}

PhanSo::PhanSo(const PhanSo &ps)
{
    Tu = ps.Tu;
    Mau = ps.Mau;
}

void PhanSo::Nhap()
{
    cout << "\nNhap vao tu so: ";
    cin >> Tu;
    do
    {
        cout << "\nNhap vao tu so: ";
        cin >> Mau;
        if (Mau == 0)
        {
            cout << "\nMau so phai khac khong";
        }
    } while (Mau == 0);
}

void PhanSo::Xuat()
{
    cout << Tu << "/" << Mau;
}

PhanSo PhanSo::TinhTong(PhanSo ps)
{
    PhanSo tong;
    tong.Tu = Tu * ps.Mau + Mau * ps.Tu;
    tong.Mau = Mau * ps.Mau;
    return tong;
}

PhanSo PhanSo::operator+(PhanSo ps)
{
    PhanSo tong;
    tong.Tu = Tu * ps.Mau + Mau * ps.Tu;
    tong.Mau = Mau * ps.Mau;
    return tong;
}

PhanSo PhanSo::operator+(int n)
{
    PhanSo b(n, 1);
    return *this + b;
}

int PhanSo::Getter_Tu()
{
    return Tu;
}

int PhanSo::Getter_Mau()
{
    return Mau;
}

void PhanSo::Setter_Tu(int n)
{
    Tu = n;
}

void PhanSo::Setter_Mau(int n)
{
    Mau = n;
}

PhanSo operator+(int n, PhanSo ps)
{
    // cach 1:
    // return ps + n;

    // cach 2: getter / setter
    // PhanSo tong;
    // tong.Setter_Tu(tong.Getter_Tu());
    // tong.Setter_Mau(tong.Getter_Mau());
    // return tong + ps;

    // cach 3: friend
    PhanSo tong;
    tong.Tu = ps.Tu + ps.Mau * n;
    tong.Mau = ps.Mau;
    return tong;
}

istream &operator>>(istream &is, PhanSo &ps)
{
    cout << "\nNhap vao tu so: ";
    is >> ps.Tu;
    do
    {
        cout << "\nNhap vao mau so: ";
        is >> ps.Mau;
        if (ps.Mau == 0)
        {
            cout << "\nMau so khong hop le";
        }
    } while (ps.Mau == 0);
    return is;
}

ostream &operator<<(ostream &os, PhanSo ps)
{
    os << ps.Tu << "/" << ps.Mau;
    return os;
}

PhanSo &PhanSo::operator=(const PhanSo &ps) // cai dat khi co con tro => new <kieu du lieu>
{
    this->Tu = ps.Tu;
    this->Mau = ps.Mau;
}

PhanSo &PhanSo::operator+=(const PhanSo &ps)
{
    *this = *this + ps;
    return *this;
}

PhanSo &PhanSo::operator-=(const PhanSo &ps)
{
    *this = *this - ps;
    return *this;
}

PhanSo &PhanSo::operator*=(const PhanSo &ps)
{
    *this = *this * ps;
    return *this;
}

PhanSo &PhanSo::operator/=(const PhanSo &ps)
{
    *this = *this / ps;
    return *this;
}

PhanSo PhanSo::operator-(PhanSo ps)
{
    PhanSo hieu;
    hieu.Tu = Tu * ps.Mau - Mau * ps.Tu;
    hieu.Mau = Mau * ps.Mau;
    return hieu;
}

PhanSo PhanSo::operator-(int n)
{
    PhanSo hieu(n, 1);
    return *this - hieu;
}

PhanSo PhanSo::operator*(PhanSo ps)
{
    PhanSo tich;
    tich.Tu = Tu * ps.Tu;
    tich.Mau = Mau * ps.Mau;
    return tich;
}

PhanSo PhanSo::operator*(int n)
{
    PhanSo tich(n, 1);
    return (*this) * tich;
}

PhanSo PhanSo::operator/(PhanSo ps)
{
    PhanSo thuong(ps.Mau, ps.Tu);
    return (*this) * thuong;
}

PhanSo PhanSo::operator/(int n)
{
    PhanSo thuong(1, n);
    return (*this) * thuong;
}

// tien to ++
PhanSo PhanSo::operator++()
{
    *this = *this + 1;
    return *this;
}

PhanSo PhanSo::operator--()
{
    *this = *this - 1;
    return *this;
}

// hau to ++
PhanSo PhanSo::operator++(int x)
{
    PhanSo temp = *this;
    *this = *this + 1;
    return temp;
}

// hau to --
PhanSo PhanSo::operator--(int x)
{
    PhanSo temp = *this;
    *this = *this - 1;
    return temp;
}

bool PhanSo::operator<(PhanSo ps)
{
    double trai = (double)this->Tu / this->Mau;
    double phai = (double)ps.Tu / ps.Mau;
    return trai < phai;
}

bool PhanSo::operator>(PhanSo ps)
{
    return ps < (*this);
}

bool PhanSo::operator<=(PhanSo ps)
{
    double trai = (double)this->Tu / this->Mau;
    double phai = (double)ps.Tu / ps.Mau;
    return trai <= phai;
}

bool PhanSo::operator>=(PhanSo ps)
{
    return ps <= (*this);
}

bool PhanSo::operator==(PhanSo ps)
{
    double trai = (double)this->Tu / this->Mau;
    double phai = (double)ps.Tu / ps.Mau;
    return trai == phai;
}

bool PhanSo::operator!=(PhanSo ps)
{
    double trai = (double)this->Tu / this->Mau;
    double phai = (double)ps.Tu / ps.Mau;
    return trai != phai;
}

PhanSo operator-(int n, PhanSo ps)
{
    PhanSo hieu(n, 1);
    return hieu - ps;
}

PhanSo operator*(int n, PhanSo ps)
{
    PhanSo tich(n, 1);
    return tich * ps;
}

PhanSo operator/(int n, PhanSo ps)
{
    PhanSo thuong(n, 1);
    return thuong / ps;
}

PhanSo operator-=(int &n, PhanSo ps)
{
    PhanSo hieu = n - ps;
    n -= (ps.Tu / ps.Mau);
    return hieu;
}

PhanSo operator*=(int &n, PhanSo ps)
{
    PhanSo tich = n * ps;
    n *= (ps.Tu / ps.Mau);
    return tich;
}

PhanSo operator/=(int &n, PhanSo ps)
{
    PhanSo thuong = n / ps;
    n /= (ps.Tu / ps.Mau);
    return thuong;
}