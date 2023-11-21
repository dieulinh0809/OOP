#include<iostream>
#include<stdio.h>
#include<fstream>
#include<math.h>
using namespace std;

//Khai bao lop doi tuong hinh tam giac
class HinhTamGiac{
    private:
        float a,b,c;
    public:
        void nhap();
        void check();
        float tinhDT();
        float tinhCV();
};
//==Chuong trinh chinh==//
int main(){
    //Tao 1 lop doi tuong hinh tam giac
    HinhTamGiac tg;
    //Tuong tac voi doi tuong tg

    tg.nhap();
    tg.check();
    cout<<"CV : "<<tg.tinhCV()<<endl;
    cout<<"DT : "<<tg.tinhDT()<<endl;

    cout<<endl;
    return 0;
}
//=Dinh nghia ham ==//
void HinhTamGiac::nhap(){
    int k;
    cout<<"Ban moi nhap vao tu ban phim chon 0 , nhap vao tu file tamgiac.txt chon 1 : ";
    cin>>k;
    if(k==0){
         cout<<"Moi nhap vao 3 canh cua tam giac : ";
        cin>>a>>b>>c;
    }else{
         ifstream fin ("tamgiac.txt");
        fin>>a>>b>>c;
    }
}
void  HinhTamGiac::check(){
    if(a+b<c || a+c<b || b+c<a){
        cout<<"Du lieu vua nhap khong phai tam giac !"<<endl;
        return ;
    }
}
 float HinhTamGiac::tinhDT(){
    float p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
 }
 float  HinhTamGiac::tinhCV(){
    return a+b+c;
 }
