#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

void showData_Of_Current_Element(int data)
{
    printf("Data = %d\n", data);
}
int main()
{
    struct Node *head;
    Node *second = NULL;
    Node *third = NULL;
    //Cập nhật bộ nhớ cho 3 node trong vùng nhớ heap
    head = (Node*)malloc(sizeof(Node));
    second = (Node*)malloc(sizeof(Node));
    third = (Node*)malloc(sizeof(Node));
    head -> data = 1;       //Gán dữ liệu cho node đầu tiên trong danh sách
    head -> next = second; //Nối node đầu tiên với node thứ 2
    second -> data = 2;     //Gán dữ liệu cho node thứ 2
    second -> next = third; //Nối node thứ 2 với node thứ 3
    third -> data = 3;       //Gán dữ liệu cho node thứ 3
    third -> next = NULL;
    Node *cur;
    for(cur = head; cur != NULL; cur = cur ->next)
        showData_Of_Current_Element(cur -> data);
    return 0;
}