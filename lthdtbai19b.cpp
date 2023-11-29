//De bai  19(lthdtbai19.cpp): Cho điểm A(x1,y1) và điểm B(x2,y2). Tính khoảng cách AB.
//:
#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

class Diem{
    private :
        int  x,y;
    public :
        void nhap();
        void hien();
        float  khoangCach(Diem& d2);
};
//==Chuong trinh chinh==//
int main(){
    // Tao 2 doi tuong diem
    Diem A,B;
    //Nhap 2 diem
    cout<<"Nhap vao diem A :\n";
    A.nhap();
    cout<<"Nhap vao diem B : \n";
    B.nhap();
    //Dua ra toa do 2 diem
    A.hien();
    B.hien();
    //Tinh khoang cach
    float kc=A.khoangCach(B);
    cout<<"Khoang cach 2 diem : "<<kc;
    cout<<endl;
    return 0;
}
//=Dinh nghia ham ==//
void Diem::nhap(){
   cout<<"Moi nhap vao x ,y : ";
   cin>>x>>y;
}

void Diem::hien(){
    printf("Toa do diem (%d,%d)\n",x,y);
}

float  Diem::khoangCach(Diem& d2){

    float kc= sqrt(pow((d2.x-x),2)+ pow((d2.y-y),2));
    return kc;

}
