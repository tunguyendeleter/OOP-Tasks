#include "CongTy.h"

CongTy::CongTy()
{
}

CongTy::~CongTy()
{
}

void CongTy::NhapNhanVien()
{
    int luachon;
    NhanVien *nv;
    do
    {
        cout << "\n-----------MENU-----------";
        cout << "\n1. Nhan vien cong nhat";
        cout << "\n2. Nhan vien san xuat";
        cout << "\n3. Nhan vien quan ly";
        cout << "\n--------------------------";
        do
        {
            cout << "\nNhap lua chon: ";
            cin >> luachon;
        } while (luachon < 0 || luachon > 3);
        if (luachon == 1)
        {
            nv = new NhanVienCongNhat;
        }
        else if (luachon == 2)
        {
            nv = new NhanVienSanXuat;
        }
        else if (luachon == 3)
        {
            nv = new NhanVienQuanLy;
        }

        if (luachon != 0)
        {
            string maso;
            bool check = false;
            do
            {
                fflush(stdin);
                cout << "\nNhap ma so: ";
                getline(cin, maso);
                check = KiemTraTrungMaSo(maso);
                if (check == true)
                {
                    cout << "\nMa so bi trung!";
                }
            } while (check == true); // false => khong trung

            nv->Setter_maso(maso);
            nv->NhapNhanVien();
            List.push_back(nv);
        }
    } while (luachon != 0);
}

bool CongTy::KiemTraTrungMaSo(string maso)
{
    int soluong = List.size();
    for (int i = 0; i < soluong; i++)
    {
        if (maso == List[i]->Getter_maso())
        {
            return true;
        }
    }
    return false;
}

void CongTy::XuatNhanVien()
{
    int soluong = List.size();
    for (int i = 0; i < soluong; i++)
    {
        cout << "\nThong tin nhan vien thu " << i + 1 << " la:";
        List[i]->XuatNhanVien();
    }
}

double CongTy::TinhTongLuongCongTy()
{
    int soluong = List.size();
    double tongluong = 0;
    for (int i = 0; i < soluong; i++)
    {
        tongluong += List[i]->TinhLuong();
    }
    return tongluong;
}

void CongTy::NhanVienCoLuongCaoNhat() // co nhieu nhan vien co luong = nhau
{
    // duyet so luong nhan vien
    int soluong = List.size();
    double luongcaonhat = 0;
    for (int i = 0; i < soluong; i++)
    {
        double luong = List[i]->TinhLuong();
        if (luongcaonhat < luong)
        {
            luongcaonhat = luong;
        }
    }
    for (int i = 0; i < soluong; i++)
    {
        if (luongcaonhat == List[i]->TinhLuong())
        {
            List[i]->XuatNhanVien();
        }
    }
}

double CongTy::TinhLuongNhanVienCongNhat()
{
    int soluong = List.size();
    double tong = 0;
    for (int i = 0; i < soluong; i++)
    {
        if (List[i]->Getter_id() == 1)
        {
            tong += List[i]->TinhLuong();
        }
    }
    return tong;
}