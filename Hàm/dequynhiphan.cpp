/*
    Tính số hạng thứ n của dãy Fibonacci được định nghĩa như sau:
    - f1 = f0 = 1;
    - fn = f(n-1) + f(n-2);
    - Điều kiện dừng f(0) = f(1) = 1
*/

#include<iostream>
using namespace std;
long Fibonacci(int n) 
{
    if(n==0 || n==1) return 1;
    return Fibonacci(n -1) + Fibonacci(n - 2);
}
int main()
{
    int n;
    cout << "Nhap n = "; 
    cin >> n;
    cout << "Ket qua: " << Fibonacci(n);
    return 0;
}