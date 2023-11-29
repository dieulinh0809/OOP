//De:
/*
Bài tập (lthdt-sophuc1.cpp): Tính tổng hai số phức.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao lop so phuc
class SoPhuc
{
    private:
        float a,b;

    public:
        void nhap();
        void hien();
        SoPhuc cong(SoPhuc &p2);
};

//===chuong trinh chinh===
int main()
{
    //Tao 3 doi tuong so phuc;
    SoPhuc p1,p2,tong;

    cout<<"Nhap vao so phuc p1:\n";
    p1.nhap();
    cout<<"Nhap vao so phuc p2:\n";
    p2.nhap();

    //Cong 2 so phuc
    tong = p1.cong(p2);

    //Dua ra
    cout<<"\nSo phuc p1: "; p1.hien();
    cout<<"\nSo phuc p2: "; p2.hien();
    cout<<"\nSo phuc p1 + p2: "; tong.hien();

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
void SoPhuc::nhap()
{
    cout<<"Nhap vao phan thuc: "; cin>>a;
    cout<<"Nhap vao phan ao: "; cin>>b;
}

void SoPhuc::hien()
{
    if(b>=0) cout<<a<<" + j"<<b;
    else cout<<a<<" - j"<<-b;
}

SoPhuc SoPhuc::cong(SoPhuc &p2)
{
    SoPhuc tg;

    tg.a = a + p2.a;
    tg.b = b + p2.b;

    return tg;
}
