//De bai : Bài 18(lthdtbai18.cpp): Tính tổng 2 phân số, đưa các phân số ra màn hình ở dạng chưa rút gọn
// 74 và đã rút gọn.
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

class PhanSo{
    private :
        float a,b,c,d;
    public:
        void nhap();
        int tinhTong();

};

//==Chuong trinh chinh==//
int main(){
    //Tao 1 lop dtg
    PhanSo ps;
    //Tuong tac
    ps.nhap();
    ps.tinhTong();

    cout<<endl;
    return 0;
}
//=Dinh nghia ham ==//

void PhanSo::nhap(){
    cout<<"Moi nhap vao a,b(a/b) va c,d(c/d): ";
    cin>>a>>b>>c>>d;
}
int  PhanSo::tinhTong(){
    int e=a*d+b*c,f=b*d,ucln;
    printf("Phan so chua rut gon la : %d/%d",e,f);
    int temp = e, tg =f;
    int r = e%f;
    while(r!=0){
        e=f;
        f=r;
        r=e%f;
        if(r==0){
             ucln =f;
        }
    }
    cout<<endl;
    printf("Phan so chua rut gon la : %d/%d",temp/ucln,tg/ucln);


}
