/*
Bài 41(lthdtbai41.cpp): Thời điểm là một loại ngày tháng và cũng là một loại thời gian
nhưng có thêm địa điểm. Ngày tháng có ngày, tháng, năm. Thời gian có giờ và phút. Nhập vào một thời điểm,
đưa ra địa điểm, ngày và thời gian của thời điểm đó ở dạng Địa điểm, ngày dd/mm/yy - h:mm.
Ví dụ: Hà Nội, ngày 22/04/19 - 9:30
*/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class NgayThang
{
    private:
        int dd,mm,yy;
    public:
        void nhap();
        void hien();
};

class ThoiGian
{
    private:
        int gio,phut;
    public:
        void nhap();
        void hien();
};

class ThoiDiem:public NgayThang,ThoiGian
{
    private:
        char diaDiem[100];
    public:
        void nhap();
        void hien();

};

int main()
{
    ThoiDiem td;
    td.nhap();
    td.hien();
    cout<<endl;
    return 0;
}

//==Dinh nghia ham
void NgayThang::nhap()
{
    cout<<"Nhap vao ngay: ";
    cin>>dd;
    cout<<"Nhap vao thang : ";
    cin>>mm;
    cout<<"Nhap vao nam : ";
    cin>>yy;
}

void NgayThang::hien()
{
    if(dd<0 && mm<0 && yy<0){
        cout<<"Khong hop le !";
        return ;
    }
    else if(yy<10){
        cout<<dd<<"/"<<mm<<"/0"<<yy;
    }else
    {
         cout<<dd<<"/"<<mm<<"/"<<yy;
    }
}

void ThoiGian::nhap()
{
    cout<<"Nhap vao gio: ";
    cin>>gio;
    cout<<"Nhap vao phut : ";
    cin>>phut;
}

void ThoiGian::hien()
{
    if(gio<0 && phut<0)
    {
        cout<<"Khong hop le !";
        return ;
    }else if(phut<10)
    {
        cout<<gio<<":0"<<phut;
    }else
    {
         cout<<gio<<":0"<<phut;
    }
}

void ThoiDiem::nhap()
{
    NgayThang::nhap();
    ThoiGian::nhap();
    cout<<"Nhap vao dia diem : ";
    //cin.getline(diaDiem,100);
    cin.ignore();
    cin.getline(diaDiem,100);
    getchar();
}

void ThoiDiem::hien()
{
    cout<<diaDiem<<",";
    NgayThang::hien();
    cout<<" - ";
    ThoiGian::hien();
}
