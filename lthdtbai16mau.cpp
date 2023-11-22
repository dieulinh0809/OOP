/*
Bài 16(lthdtbai16.cpp): Đọc vào bán kính và màu nền (Xanh, Đỏ, Tím, Vàng) của n hình tròn
từ tệp văn bản "hinhtron.txt". Đưa ra màn hình bán kính, màu nền, diện tích và chu vi
của các hình tròn. Tính tổng diện tích và chu vi của n hình tròn.
Đếm số lượng hình tròn có nền màu Xanh, Đỏ, Tím, Vàng.
*/
#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string.h>

using namespace std;

//Khai bao lop doi tuong hinh tron
class HinhTron
{
    private:
        float r;
        char mauNen[7];

    public:
        void thietLapR(float r);
        void thietLapMauNen(const char *mauNen);
        void hien();
        float tinhDT();
        float tinhCV();
        int layMaMau();
};

//===chuong trinh chinh===
int main()
{
    //Tao doi tuong tep doc vao
    ifstream fin("hinhtron.txt");

    //Khai bao bien
    int n;
    float r,tongDT=0,tongCV=0;
    char mauNen[7];
    int dem[4]={0};

    //Doc so luong hinh tron tu tep
    fin>>n;

    //Tao n doi tuong hinh tron de chua n hinh tron tu tep
    HinhTron *a = new HinhTron[n];

    //Doc danh sach n hinh tron tu tep vao n doi tuong hinh tron
    for(int i=0;i<n;i++)
    {
        //Doc ban kinh va mau nen cua hinh tron thu i
        fin>>r>>mauNen;

        //Dua ban kinh va mau nen doc duoc vao doi tuong hinh tron i
        a[i].thietLapR(r);
        a[i].thietLapMauNen(mauNen);
    }

 //Dua danh sach hinh tron ra man hinh, tinh tong dt, cv va dem
    cout<<"Danh sách hình tròn đọc được từ tệp là:";
    for(int i=0;i<n;i++)
    {
        cout<<"\nHình tròn thứ "<<i+1<<":\n";
        a[i].hien();
        cout<<endl;

        //Tinh tong dt va cv
        tongDT += a[i].tinhDT();
        tongCV += a[i].tinhCV();

        //Dem so hinh tron theo mau nen
        dem[a[i].layMaMau()]++;
    }

    printf("\nTổng diện tích của %d hình tròn là: %0.1f",n,tongDT);
    printf("\nTổng chu vi của %d hình tròn là: %0.1f",n,tongCV);
    cout<<"\nSố lượng hình tròn theo các màu là:";
    cout<<"\nXanh: "<<dem[0];
    cout<<"\nĐỏ: "<<dem[1];
    cout<<"\nTím: "<<dem[2];
    cout<<"\nVàng: "<<dem[3];

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
void HinhTron::thietLapR(float r)
{
    this->r = r;
}

void HinhTron::thietLapMauNen(const char *mauNen)
{
    strcpy(this->mauNen,mauNen);
}

void HinhTron::hien()
{
    cout<<"Hình tròn có:";
    cout<<"\n\tBán kính: "<<r;
    cout<<"\n\tMàu nền: "<<mauNen;
    printf("\n\tDiện tích: %0.1f",3.14*r*r);
    printf("\n\tChu vi: %0.1f",2*3.14*r);
}

float HinhTron::tinhDT()
{
    return 3.14*r*r;
}

float HinhTron::tinhCV()
{
    return 2*3.14*r;
}

int HinhTron::layMaMau()
{
    if(strcasecmp(mauNen,"Xanh")==0) return 0;
    if(strcasecmp(mauNen,"Đỏ")==0) return 1;
    if(strcasecmp(mauNen,"Tím")==0) return 2;
    if(strcasecmp(mauNen,"Vàng")==0) return 3;
}

