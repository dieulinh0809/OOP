/*
Bài 34(lthdtbai34.cpp): Cho tệp văn bản "daysonguyen-bai34.txt" chứa dãy số nguyên,
trên tệp không có thông tin về số phần tử của dãy số. Đọc dãy số từ tệp và lưu vào
danh sách liên kết kép (DSLKK) theo thứ tự giống như trên tệp. Đưa dãy số trong DSLKK ra màn hình
theo thứ tự từ trái sang phải và từ phải sang trái. Cho biết số phần tử có trong DSLKK.
Chèn phần tử x vào đầu danh sách. Xóa nút có phần tử bằng x. Tìm nút có phần tử bằng x.
*/
#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;
//Khai bao lop doi tuong
class DList
{
    private:
        struct node
        {
            int infor;
            node *left, *right;
        } *L,*R;

    public:
        DList();
        ~DList();
        void lastInsert(int x);
        void firstInsert(int x);
        void display(bool leftToRight=1);
        int count();
        bool remove(int x);
        bool search(int x);
};

//===chuong trinh chinh====
int main()
{

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
DList::DList():L(NULL),R(NULL)
{

}

DList::~DList()
{
    while(L)
    {
        node *P = L;
        L = L->right;
        delete P;
    }
}

void DList::lastInsert(int x)
{
    //1.Tao nut nho moi chua x
    node *N = new node;
    N->infor = x;
    N->left = N->right = NULL;

    //2.Noi nut moi vao sau nut R (cuoi DSLKK)
    if(R==NULL) L = R = N;
    else
    {
        R->right = N;
        N->left = R;
        R = N;
    }
}

void DList::firstInsert(int x)
{

}

void DList::display(bool leftToRight)
{
    node *P = leftToRight?L:R;

    while(P)
    {
        cout<<P->infor<<"  ";
        P = leftToRight?P->right:P->left;
    }
}

int DList::count()
{
    int dem = 0;
    node *P = L;

    //Dem so phan tu (so nut)
    while(P)
    {
        dem++;
        P = P->right;
    }

    //Tra ve so luong dem duoc
    return dem;
}

bool DList::remove(int x)
{

}

bool DList::search(int x)
{

}
