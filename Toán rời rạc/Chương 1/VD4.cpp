/*
    Liệt kê các tập con của m phần tử của N = {1,2,...,n}
*/

#include <iostream>
using namespace std;
int n, m, dem, a[15];
void khoitao()
{
    cout << "Nhap n = ";
    cin >> n;
    cout << "Nhap m = ";
    cin >> m;
    dem = 0;
    a[0] = 0;
}
void xuat()
{
    dem++;
    cout << dem << ". ";
    for(int j = 0; j <= m; j++)
        cout << a[j] << " ";
    cout << endl;
}
void Try(int i)
{
    for(int j = a[i - 1] + 1; j <= n - m + i; j++)
    {
        if(i == m)
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