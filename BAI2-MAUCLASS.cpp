//Bản này chỉ là demo cho số nguyên !
//Stack ke tiep
class Stack
{
    private:
        enum {size=100};
        int a[size];
        int top;
    public:
        Stack();
        void push(int x);
        void pop();
        bool isEmpty();
};

//Stack phan tan 
class Stack
{
    private:
        struct node
        {
            int infor;
            node*link;
        }*top;
    public:
        Stack();
        Stack();
        void push(int x);
        void pop();
        bool isEmpty();
};

//Hang doi ke tiep
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
//Hang doi phan tan 
class Queue
{
    private:
        struct node
        {
            int infor;
            node*link;
        }*F,*R;
    public:
        Queue();
        ~Queue();
        void push(int x);
        void pop();
        bool isEmpty();
};
//Danh sach lien ket don
class DSLKD
{
    private:
        struct node
        {
            int infor;
            node*link;
        }*F;
    public:
        DSLKD();
        ~DSLKD();
        void push(int x);
        void pop();
        b
};

//Danh sach lien ket kep
class DSLKK
{
    private:
        struct node
        {
            int infor;
            node*left;
            node*right;
        }*L,*R;
    public:
        DSLKK();
        ~DSLKK();
        void push(int x);
        void pop();
        bool isEmpty();
};
