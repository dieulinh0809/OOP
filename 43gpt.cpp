#include <iostream>
#include <vector>
using namespace std;

class NhanSu
{
protected:
    char ma[10];
    char hoTen[50];

public:
    virtual void nhapThongTin() = 0;
    virtual void xuatThongTin() = 0;
    virtual char* danhGia() = 0;
};

class GiangVien : public NhanSu
{
private:
    int soBaiBao;

public:
    void nhapThongTin()
    {
        cout << "Nhap ma: ";
        cin >> ma;
        cout << "Nhap ho ten: ";
        cin.ignore();
        cin.getline(hoTen, 50);
        cout << "Nhap so bai bao: ";
        cin >> soBaiBao;
    }

    void xuatThongTin()
    {
        cout << "Ma: " << ma << endl;
        cout << "Ho ten: " << hoTen << endl;
        cout << "So bai bao: " << soBaiBao << endl;
    }

    char* danhGia()
    {
        if (soBaiBao >= 5)
            return "Gioi";
        else
            return "Khong gioi";
    }
};

class SinhVien : public NhanSu
{
private:
    float diemTBC;

public:
    void nhapThongTin()
    {
        cout << "Nhap ma: ";
        cin >> ma;
        cout << "Nhap ho ten: ";
        cin.ignore();
        cin.getline(hoTen, 50);
        cout << "Nhap diem TBC: ";
        cin >> diemTBC;
    }

    void xuatThongTin()
    {
        cout << "Ma: " << ma << endl;
        cout << "Ho ten: " << hoTen << endl;
        cout << "Diem TBC: " << diemTBC << endl;
    }

    char* danhGia()
    {
        if (diemTBC >= 8.0)
            return "Gioi";
        else
            return "Khong gioi";
    }
};

NhanSu* nhapNhanSu()
{
    int choice;
    cout << "Nhap loai nhan su (1: Giang vien, 2: Sinh vien): ";
    cin >> choice;

    NhanSu* nhanSu;
    if (choice == 1)
    {
        nhanSu = new GiangVien();
    }
    else if (choice == 2)
    {
        nhanSu = new SinhVien();
    }
    else
    {
        cout << "Loai nhan su khong hop le!" << endl;
        return NULL;
    }

    nhanSu->nhapThongTin();
    return nhanSu;
}

void xuatThongTinNhanSu(NhanSu* nhanSu)
{
    if (nhanSu != NULL)
    {
        nhanSu->xuatThongTin();
        cout << "Danh gia: " << nhanSu->danhGia() << endl;
    }
}

int main()
{
    vector<NhanSu*> danhSachNhanSu;

    int soNhanSu;
    cout << "Nhap so nhan su: ";
    cin >> soNhanSu;

    for (int i = 0; i < soNhanSu; i++)
    {
        NhanSu* nhanSu = nhapNhanSu();
        if (nhanSu != NULL)
        {
            danhSachNhanSu.push_back(nhanSu);
        }
    }

    for (int i = 0; i < danhSachNhanSu.size(); i++)
    {
        xuatThongTinNhanSu(danhSachNhanSu[i]);
    }

    return 0;
}
