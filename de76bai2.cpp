//Ho va ten : Hoang Dieu Linh
//MSV: 671615
//Lop : K67CNPMA
//De bai : De 76 bai 2

#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;
//Tao doi tuong la danh sach lien ket don
class DSLKD
{
    private:
        struct node
        {
            int infor;
            node*link;
        }*F;
    public:
        //Ham tao va ham huy
        DSLKD();
        ~DSLKD();
        //Ham nhap , ham dua ra phan tu ,ham tim kiem
        void push(int x);
        void display();
        bool sreach(int x);

};
//==Chuong trinh chinh==//
int main()
{te:
        struct node
                {
                            int infor;
                                        node*link;
                                                }*F;
                                                    public:
                                                            //Ham tao va ham huy
                                                                    DSLKD();
                                                                            ~DSLKD();
                                                                                    //Ham nhap , ham dua ra phan tu ,ham tim kiem
                                                                                            void push(int x);
                                                                                                    void display();
                                                                                                            bool sreach(int x);

                                                                                                            };
                                                                                                            //==Chuong trinh chinh==//
                                                                                                            int main()
                                                                                                            {
                                                                                                                //Tao doi tuong
                                                                                                                    DSLKD ds;
                                                                                                                        //Tuong tac voi doi tuong
                                                                                                                            //Nhap vao du lieu tu file
                                                                                                                                int x,x1;
                                                                                                                                    ifstream file("daysonguyen-thi.txt");
                                                                                                                                        while(file>>x)
                                                                                                                                            {
                                                                                                                                                    ds.push(x);
                                                                                                                                                        }
                                                                                                                                                            //Nhap vao so can tim roi dua ra ket qua tim kiem
                                                                                                                                                                cout<<"Nhap vao so can tim kiem : ";
