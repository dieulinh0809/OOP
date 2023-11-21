#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao lop doi tuong hinh chu nhat
class HinhCN
{
    private:
        float a,b;

    public:
        void nhap();
        float tinhDT();
        float tinhCV();
};

//===chuong trinh chinh===
int main()
{
    //Tao 1 doi tuong hinh chu nhat
    HinhCN hcn;

    //Tuong tac voi doi tuong hcn
    hcn.nhap();
    printf("Dien tich hinh chu nhat la: %0.1f",hcn.tinhDT());
    printf("\nChu vi hinh chu nhat la: %0.1f",hcn.tinhCV());

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
void HinhCN::nhap()
{
    cout<<"Nhap vao 2 canh hinh chu nhat: ";
    cin>>a>>b;
}

float HinhCN::tinhDT()
{
    return a*b;
}

float HinhCN::tinhCV()
{
    return (a+b)*2;
}
