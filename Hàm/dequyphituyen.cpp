/*
    Tính số hạng thứ n của dãy {Xn} được định nghĩa như sau:
    + X(0) = 1;
    + X(n) = n^2X(0) + (n-1)*X(1) + ... + 1^2*X(n-1);
    Điều kiện dừng: X(0) = 1;
*/

#include<iostream>
using namespace std;
long TinhXn(int n) 
{
    long s = 0;
    if(n == 0)   return 1;
    for(int i = 1; i <= n; i++) 
        s = s + i * i * TinhXn(n - i);
    return s; 
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Ket qua: " << TinhXn(n);
    return 0;
}