// Bài 19(lthdtbai19.cpp): Cho điểm A(x1,y1) và điểm B(x2,y2). Tính khoảng cách AB.
//   7 Yêu cầu thêm:
//     8 1) Sử dụng toán tử nhập >> để nhập vào tọa độ dạng x y;
//       9 2) Sử dụng toán tử xuất << để đưa tọa độ ra màn hình ở dạng (x, y);
//        10 3) Sử dụng toán tử trừ - để tính khoảng cách giữa hai điểm;
//         11 4) Có thể tự động khởi tạo tạo độ x, y bằng 0;
//
//          5) Có thể khởi tạo toạ độ x, y bằng giá trị cho trước.
//
//           */
//
#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

class Diem
{
    private :
        float  x,y;
    public :
        friend istream& operator>>(istream &cin,Diem& d2);
        friend ostream& operator<<(ostream &cout,Diem& d2);
        float  operator-(Diem& d2);
};

//==Chuong trinh chinh==//
int main()
{
    // Tao 2 doi tuong diem
    Diem A,B;
    //Nhap 2 diem
    cout<<"Nhap vao diem A :\n";
    cin>>A;
    cout<<"Nhap vao diem B : \n";
    cin>>B;
    //Dua ra toa do 2 diem
    cout<<A;
    cout<<B;
    //Tinh khoang cach
    float kc=A-B;
    cout<<"Khoang cach 2 diem : "<<kc;
    cout<<endl;
    return 0;
}
//=Dinh nghia ham ==//
istream& operator>>(istream &cin,Diem& d2)
{
   cout<<"Moi nhap vao x : ";
   cin>>d2.x;
   cout<<"Moi nhap vao y : ";
    cin>>d2.y;
    return cin;

}ostream& operator<<(ostream &cout,Diem& d2)
{
    printf("Toa do diem (%d,%d)\n",d2.x,d2.y);
    return cout;
}

float  Diem::operator-(Diem& d2)
{
    float kc= sqrt(pow((d2.x-x),2)+ pow((d2.y-y),2));
    return kc;
}


