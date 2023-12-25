/*Bài 37(lthdtbai37.cpp): Tạo lớp đối tượng xâu ký tự có các đặc điểm giống như xâu ký tự
trong Pascal: Có thể khởi tạo đối tượng xâu bằng một hằng xâu; có thể gán hằng xâu hoặc
đối tượng xâu cho đối tượng xâu; có thể dùng phép toán + để nối xâu; có thể dùng các
phép toán so sánh để so sánh xâu; có thể dùng cin và cout để nhập vào và đưa ra đối tượng xâu.*/

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
class XauKyTu
{
    private:
        enum {size=100};
        char xau[100];
    public:
        XauKyTu(const XauKyTu& s );
        XauKyTu(const char* s);
        XauKyTu operator+(const XauKyTu& s);
        bool operator==(const XauKyTu& s);
        //Ham ban 
        friend istream& operator>>(istream& cin,XauKyTu& s);
        friend ostream& operator<<(ostream& cout,XauKyTu& s);

};

int main()
{
    char tg[100],temp[100];
    cout<<"Nhap vao xau 1 : ";
    cin>>tg;
    cout<<"Nhap vao xau 2 : ";
    cin>>temp;
    XauKyTu s1(tg);
    XauKyTu s2(temp);
    
    
    cout<<"Xau Ky tu 1: ";
    cout<<s1<<endl ;
    cout<<"Xau Ky tu 2: ";
    cout<<s2<<endl;
    cout<<"Ket qua : ";
    //Cong xau 
    XauKyTu s=s1+s2;
    cout<<s<<endl;
    //So sanh
    if(s1==s2)
    {
        cout<<"Xau s1 = s2!";
    }else
    {
        cout<<"Xau s1 khong bang s2 !";
    }
    cout<<endl;
    return 0;
}
//Dinh nghia ham 
XauKyTu::XauKyTu(const XauKyTu& s)
{
    strcpy(xau,s.xau);
}

XauKyTu::XauKyTu(const char* s)
{ 
    strcpy(xau,s);
}

XauKyTu XauKyTu::operator+(const XauKyTu& s)
{
    //Ham tao gan doi tuong ket qua = ket qua cua ket qua cong xau 
    XauKyTu kq(strcat(xau, s.xau));
    return kq;
}

bool XauKyTu::operator==(const XauKyTu& s)
{
    return strcmp(xau,s.xau);
}
//Ham ban 
istream& operator>>(istream& cin,XauKyTu& s)
{
    cout<<"Nhap vao xau ky tu  : ";
    cin>>s.xau;
    return cin;
}

ostream& operator<<(ostream& cout,XauKyTu& s)
{
    //cout<<"Xau ky tu vua nhap la : ";
    cout<<s.xau;
    return cout;
}
