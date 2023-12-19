//De bai : Bài 23(lthdtbai23.cpp): Nhập vào một danh sách n mặt hàng; mỗi mặt hàng có tên hàng, số lượng, đơn giá.
//Tính tổng tiền của n mặt hàng.
#include<iostream>
#include<stdio.h>

using namespace std;

class MatHang
{
    private :
        char tenHang[50];
        int slg;
        float donGia;
    public :
        void nhap();
        void InRa();
        float tinhTong();
};

//==Chuong trinh chinh==//
int main()
{
    int n ;
    float tong=0;
    cout<<"Nhap vao n : ";
    cin>>n;

    //Tao mang doi tuong

    MatHang matHang[n];

    //Nhap du lieu

    for(int i=0;i<n;i++)
    {
        matHang[i].nhap();
    }

    //Dua ra du lieu va tinh tong tien

    cout<<"Cac mat hang bao gom : "<<endl;
    for(int i=0;i<n;i++)
    {
        matHang[i].InRa();
        tong+= matHang[i].tinhTong();
    }

    cout<<"Tong tien : "<<tong;

    cout<<endl;
    return 0;
}
//=Dinh nghia ham ==//
void MatHang::nhap()
{
    cout<<"Nhap vao ten mat hang : ";
    cin>>tenHang;
    cout<<"Nhap vao so luong: ";
    cin>>slg;
    cout<<"Nhap vao don gia :";
    cin>>donGia;
}

void MatHang::InRa()
{
    cout<<tenHang<<" "<<slg<<" "<<donGia<<endl;
}

float MatHang::tinhTong()
{
    return donGia*slg;
}
