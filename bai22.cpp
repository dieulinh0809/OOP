//nhan mtr + chong toan tu + ham ban 
/*Bài 22(lthdtbai22.cpp): Tính tích 2 ma trận nguyên: Cmxn = Amxp * Bpxn. Ma trận Amxp để trong
tệp văn bản "matran-A.txt", ma trận Bpxn để trong tệp văn bản "matran-B.txt".
Đưa các ma trận ra màn hình theo định dạng hàng, cột.
Yêu cầu thêm:
1) Sử dụng toán tử nhập >> để đọc vào ma trận từ tệp;
2) Sử dụng toán tử xuất << để đưa ma trận ra màn hình theo định dạng hàng, cột;
3) Sử dụng toán tử cộng + để cộng 2 ma trận và trả về ma trận tổng;
4) Tự động khởi tạo kích thước ma trận bằng 0.
*/
#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;

//Khai bao lop doi tuong ma tran nguyen
class MaTran
{
    private:
        enum {size=10};
        int a[size][size];
        int m,n;

    public:
        MaTran();
        MaTran operator*(MaTran &mt2);

        //Ham ban
        friend ifstream& operator>>(ifstream &fin,MaTran &mt);
        friend ostream& operator<<(ostream &cout,MaTran &mt);
};

//===chuong trinh chinh===
int main()
{
    //Tao 3 doi tuong ma tran
    MaTran A,B,C;

    //Tao doi tuong tep doc vao
    ifstream finA("matran-A.txt");
    ifstream finB("matran-B.txt");

    //Doc ma tran A va B vao doi tuong A, B tuong ung
    finA>>A;
    finB>>B;

    //Dua ma tran A,B ra man hinh
    cout<<"Ma tran A:\n"<<A;
    cout<<"\nMa tran B:\n"<<B;

    //Cong ma tran
    C = A * B;

    //Dua ra ma tran tong
    cout<<"\nMa tran C = A * B:\n"<<C;

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
MaTran::MaTran():m(0),n(0)
{

}

MaTran MaTran::operator*(MaTran &mt2)
{
    //Tao doi tuong de chua ma tran tong
    MaTran tich;
    //Kiem tra dieu kien, neu thoa man thi cong ma tran
    if(m==mt2.n )
    {
        tich.m=m;
        tich.n=mt2.n;
        for(int i=0;i<m;i++)
            for(int j=0;j<mt2.n;j++)
                //tich.a[i][j]=0;
                for(int k=0;k<mt2.m;k++){
                    tich.a[i][j]=0;
                    tich.a[i][j] += a[i][k] * mt2.a[k][j];
                }
    }
    else cout<<"\nHai ma tran khong cung kich thuoc, khong nhan duoc.\n";

    //Tra ve ma tran tong
    return tich;
}

//Ham ban, ham thong thuong
ifstream& operator>>(ifstream &fin,MaTran &mt)
{
    //Doc kich thuoc ma tran tu tep
    fin>>mt.m>>mt.n;

    //Doc cac phan tu cua ma tran tu tep
    for(int i=0;i<mt.m;i++)
        for(int j=0;j<mt.n;j++)
            fin>>mt.a[i][j];

    return fin;
}

ostream& operator<<(ostream &cout,MaTran &mt)
{
    for(int i=0;i<mt.m;i++)
    {
        //Dua ra hang i
        for(int j=0;j<mt.n;j++)
            printf("%6d",mt.a[i][j]);

        //Xuong dong
        cout<<endl;
    }

    return cout;
}
