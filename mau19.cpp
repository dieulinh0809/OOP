/*
Bài 19(lthdtbai19.cpp): Cho điểm A(x1,y1) và điểm B(x2,y2). Tính khoảng cách AB.
Yêu cầu thêm:
1) Sử dụng toán tử nhập >> để nhập vào tọa độ dạng x y;
2) Sử dụng toán tử xuất << để đưa tọa độ ra màn hình ở dạng (x, y);
3) Sử dụng toán tử trừ - để tính khoảng cách giữa hai điểm;
4) Có thể tự động khởi tạo tạo độ x, y bằng 0;
5) Có thể khởi tạo toạ độ x, y bằng giá trị cho trước.
*/
#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

//Khai bao lop diem trong mat phang
class Diem
{
    private:
        float x,y;

    public:
        Diem();
        Diem(float x,float y);
        float operator-(Diem &D2);

        //Ham ban
        friend istream& operator>>(istream &cin,Diem &D);
        friend ostream& operator<<(ostream &cout,Diem &D);
};

//===chuong trinh chinh===
int main()
{
    //Tao 2 doi tuong diem
    Diem A,B;

    //Tuong tac
    cout<<"Nhap vao toa do diem A ";
    cin>>A;
    cout<<"Nhap vao toa do diem B ";
    cin>>B;

    //Tinh khoang cach AB
    float kc = A - B;

    //Dua ra kq
    cout<<"\nDiem A"<<A;
    cout<<"\nDiem B"<<B;
    printf("\nKhoang cach AB = %0.1f",kc);

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
Diem::Diem():x(0),y(0)
{

}

Diem::Diem(float x,float y):x(x),y(y)
{

}

float Diem::operator-(Diem &D2)
{
    return sqrt((D2.x-x)*(D2.x-x) + (D2.y-y)*(D2.y-y));
}

//Ham ban
istream& operator>>(istream &cin,Diem &D)
{
    cout<<"(dang x y): ";
    cin>>D.x>>D.y;

    return cin;
}

ostream& operator<<(ostream &cout,Diem &D)
{
    cout<<"("<<D.x<<", "<<D.y<<")";

    return cout;
}

