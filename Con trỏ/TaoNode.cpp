#include<iostream>
#include<cmath>
#include<string>
using namespace std;

//Tạo kiểu product
struct Product
{
    string ID; //
    string Name; //
    float amount;
    float price;
    Product *pNext; //
};

//Khởi tạo Node
struct Node
{
    Product data;
    Node *pNext;
};

//Tạo Node sản phẩm
Node *createNode(Product x)
{
    Node *q = new Node;
    q -> data = x;
    q -> pNext = NULL;
    return 0;
};

Product Add()
{
    Product x;
    cout << "Nhap thong tin san pham moi: \n";
    cout << "ID";fflush(stdin);getline(cin, x.ID);
    cout << "Name: ";fflush(stdout);getline(cin, x.Name);
    cout << "Amount: ";cin >> x.amount;
    cout << "Price: ";cin >> x.price;
    return x;
}
//Khởi tạo danh sách liên kết đơn
void createList(Node *&L)
{
    L=NULL;
}
//Thêm phần tử vào đầu dãy Node
void Themvaocuoi(Node *&L, Product x)
{
    Node *p, *r;
    r = createNode(x);
    if(L == NULL)   L = r;
    else
    {
        p = L;
        while(p -> pNext != NULL)
        {
            p = p -> pNext;
        }
        r ->pNext = p;
        cout << "fff";
    }
}
//Nhap danh sach san pham
void nhapsp(Node *&L, int n)
{
    Product x;
    cout << "So luong san pham: "; cin >> n;
    for(int i = 0; i < n; i++)
    {
        x = Add();
        Themvaocuoi(L, x);
    }
}
//Duyệt
void in(Node *L)
{
    Node *r = L;
    while(r != NULL)
    {
        cout << "ID: " << r -> data.ID << "\t";
        cout << "Name:" << r ->data.Name << "\t";
        cout << "Amount: " << r -> data.amount << "\t";
        cout << "Price: " << r -> data.price << "\t";
        r = r ->pNext;
    }
}
void inTT(Node *L)
{
    Node *r = L;
    while(r != NULL)
    {
        if(r->data.amount*r - data.price.TTmax(L))
        {
            cout << "ID: " << r -> data.ID << "\t";
            cout << "Name:" << r -> data.Name << "\t";
            cout << "Amount:" << r -> data.amount << "\t";
            cout << "Price: " << r -> data.price << "\t";
        }
        r=r->pNext;
    }
}
//Sắp xếp
void Sx(Node *L)
{
    for(Node *r=L; r!=NULL; r=r->pNext)
    {
        for(Node *r2=r->pNext; r2!= NULL; r2=r2->pNext)
        {
            if(r->data.amount < r2->data.amount)
            {
                Product temp = r->data;
                r->data = r2->data;
                r2->data = temp;
            }
        }
    }
}

int main()
{
    return 0;
}