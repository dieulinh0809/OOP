//Ho ten: Hoang Dieu linh
//MaSV: 671615
//Lop: K67CNPMA
//De:
/*
   Bài 21(lthdtbai21.cpp): Tính tổng 2 ma trận nguyên: Cmxn = Amxn + Bmxn. Ma trận Amxn để trong
   tệp văn bản "matran-A.txt", ma trận Bmxn để trong tệp văn bản "matran-B.txt".
   Đưa các ma trận ra màn hình theo định dạng hàng, cột.
   Yêu cầu thêm:
   1) Sử dụng toán tử nhập >> để đọc vào ma trận từ tệp;
   2) Sử dụng toán tử xuất << để đưa ma trận ra màn hình theo định dạng hàng, cột;
   3) Sử dụng toán tử cộng + để cộng 2 ma trận và trả về ma trận tổng;
   4) Tự động khởi tạo kích thước ma trận bằng 0.
   */
#include<iostream>
#include<stdio.h>
#include<fstream>

using namespace std;

class MaTran
{
    private :
        int m,n;
        int **a;
    public :
        MaTran();
        MaTran operator + (MaTran &b);

        //Ham ban
        friend ifstream& operator >>(ifstream &cin,MaTran &mt);
        friend ostream& operator <<(ostream &cout,MaTran &mt);
};
//===chuong trinh chinh===
int main()
{
    //Tao lop doi tung
    MaTran a,b,c;

    //Nhap vao 2 ma tran
    ifstream file1("matran-A.txt");
    ifstream file2("matran-B.txt");

    file1>>a;
    file2>>b;

    //Tinh Tong
    c=a+b;
    //Dua ra ket qua
    cout<<"Ma tran A : "<<endl;
    cout<<a<<endl;
    cout<<"Ma tran B : "<<endl;
    cout<<b<<endl;
    cout<<"Ma tran C : "<<endl;
    cout<<c;
    cout<<endl;
    return 0;
}

//===dinh nghia ham===
MaTran::MaTran()
{
    cout<<"Nhap vao hang cua ma tran : ";
    cin>>m;

    cout<<"Nhap vao cot cua ma tran : ";
    cin>>n;
    //Cap phat bo nho dong
    a=new int *[m];
    for(int i =0;i<m;i++)
    {
        a[i]=new int [n];
    }
    //Gan gia tri bang 0 cho ma tran
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
}

MaTran MaTran ::operator + (MaTran &b)
{
    MaTran c ;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            c.a[i][j]=a[i][j]+b.a[i][j];
        }
    }
    return c;
}

ifstream& operator >>(ifstream &cin,MaTran &mt)
{
    for(int i=0;i<mt.m;i++)
    {
        for(int j=0;j<mt.n;j++)
        {
            cin>>mt.a[i][j];
        }

    }
    return cin;
}

ostream& operator <<(ostream &cout,MaTran &mt)
{
    for(int i=0;i<mt.m;i++)
    {
        for(int j=0;j<mt.n;j++)
        {
            cout<<mt.a[i][j]<<" ";
        }
        cout<<endl;
    }
    return cout;
}
