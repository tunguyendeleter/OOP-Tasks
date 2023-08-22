#include <iostream>
#include <fstream>
using namespace std;

class PhanSo
{
private:
    int Tu, Mau;

public:
    PhanSo();               // khoi tao mac dinh
    ~PhanSo();              // giai phong con tro
    PhanSo(int, int);       // tham so
    PhanSo(const PhanSo &); // sao chep: su dung khi cai dat con tro
    void Nhap();
    void Xuat();
    PhanSo TinhTong(PhanSo); // tinh tong phan so
    // phanso + phanso
    PhanSo operator+(PhanSo);
    // phanso - phanso
    PhanSo operator-(PhanSo);
    // phanso * phanso
    PhanSo operator*(PhanSo);
    // phanso / phanso
    PhanSo operator/(PhanSo);

    // phanso + int
    PhanSo operator+(int);
    // phanso - int
    PhanSo operator-(int);
    // phanso * int
    PhanSo operator*(int);
    // phanso / int
    PhanSo operator/(int);

    // int  + phanso
    friend PhanSo operator+(int, PhanSo); // dua ham ben ngoai khong thuoc class thanh friend function
    // int - phanso
    friend PhanSo operator-(int, PhanSo);
    // int * phanso
    friend PhanSo operator*(int, PhanSo);
    // int / phanso
    friend PhanSo operator/(int, PhanSo);

    // phanso ++
    PhanSo operator++();
    // phanso --
    PhanSo operator--();
    // ++ phanso
    PhanSo operator++(int);
    // -- phanso
    PhanSo operator--(int);

    // toan tu =
    PhanSo &operator=(const PhanSo &);
    // phanso += phanso
    PhanSo &operator+=(const PhanSo &);
    // phanso -= phanso
    PhanSo &operator-=(const PhanSo &);
    // phanso *= phanso
    PhanSo &operator*=(const PhanSo &);
    // phanso /= phanso
    PhanSo &operator/=(const PhanSo &);

    // int += phanso
    friend PhanSo operator+=(int &, PhanSo);
    // int -= phanso
    friend PhanSo operator-=(int &, PhanSo);
    // int *= phanso
    friend PhanSo operator*=(int &, PhanSo);
    // int /= phanso
    friend PhanSo operator/=(int &, PhanSo);

    // toan tu <
    bool operator<(PhanSo);
    // toan tu >
    bool operator>(PhanSo);
    // toan tu <=
    bool operator<=(PhanSo);
    // toan tu >=
    bool operator>=(PhanSo);
    // toan tu ==
    bool operator==(PhanSo);
    // toan tu !=
    bool operator!=(PhanSo);

    // toan tu nhap: iostream = istream: cin, ostream: cout, fstream = ifstream, ofstream
    friend istream &operator>>(istream &, PhanSo &);
    // toan tu xuat
    friend ostream &operator<<(ostream &, PhanSo);

    // getter() setter()
    int Getter_Tu();
    int Getter_Mau();
    void Setter_Tu(int);
    void Setter_Mau(int);
};

// // int + phanso
// PhanSo operator+(int n, PhanSo ps);