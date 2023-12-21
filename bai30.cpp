/*Bài 30(lthdtbai30.cpp): Cho tệp văn bản "daysonguyen-bai30.txt" chứa dãy số nguyên,
trong đó có cả số dương và số âm, trên tệp không có thông tin về số lượng số.
Sử dụng hàng đợi lưu trữ kế tiếp để tách, đưa ra màn hình dãy các số dương và dãy các số âm,
mỗi dãy số trên một dòng.*/
#include<iostream>
#include<stdio.h>
#include<fstream>

using namespace std;

class Queue
{
    private:
        enum {size=50};
        int a[size];
        int front ,rear;
    public:
        Queue();
        void push(int x);
        void pop();
        bool isEmpty();
        bool isFull();
};
//==Chuong trinh chinh==//
int main()
{
    Queue q1,q2;
    int x;
    ifstream fin("daysonguyen-bai30.txt");
    while(fin>>x){
        if(x<0)
        {
            q1.push(x);
        }else{
            q2.push(x);
        }
    }
    cout<<"Day so sau khi tach : ";
    while(!q1.isEmpty()){
        q1.pop();
    }
    
     while(!q2.isEmpty()){
        q2.pop();
    }
    cout<<endl;
    return 0;
}
//==Dinh nghia ham ==//
Queue::Queue()
{
    Queue::front=-1;
    Queue::rear=-1;
}

void Queue::push(int x)
{
   if(isFull()==true)
   {
        //cout<<"Hang doi day";
        return ;
   }
   rear++;
   a[rear]=x;
   if(front==-1)
   {
        front=0;
   }
   
}

void Queue::pop()
{
   
    
    if(isEmpty()==true)
   {
        //cout<<"Hang doi rong";
        return ;
   }
    int x=a[front];
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }else{
        front++;
    }

    
     cout<<x<<" ";
    return ;
}

bool Queue::isEmpty()
{
    if(front ==  -1)
    {
        return true ;
    }
    return false;
}

bool Queue::isFull()
{
    if( rear == (size-1))
    {
        return true ;
    }
    return false;
}
