/*
    Tính S(n) = 1 + 2 + 3 + .. + n     
    - Điều kiện dừng S(0) = 0
    - Quy tắc(công thức) tính: S(n) = S(n - 1) + n
*/
#include<iostream>
using namespace std;
long TongS(int n)
{
    if(n == 0) return 0;
    return (TongS(n - 1) + n);
}
int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    cout << "Tong la: " << TongS(n);  
    return 0;
}