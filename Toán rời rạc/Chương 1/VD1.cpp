#include<iostream>
using namespace std;
int n, dem, b[15];
void khoitao()
{
    cout << "Nhap n = ";
    cin >> n;
    dem = 0;
}
void xuat()
{
    dem++;
    cout << dem << " ";
    for(int j = 1; j <= n; j++)
        cout << b[j];
    cout << endl;
}
void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        b[i] = j;
        if(i == n)
            xuat();
        else
            Try(i + 1);
    }
}
int main()
{
    khoitao();
    Try(1);
}