#include<iostream>
using namespace std;
int n, dem, hv[10];
bool dd[10];
void khoitao()
{
    cout << "Nhap n = ";
    cin >> n;
    for(int i = 1; i <= n; i++)
        dd[i] = false;
    dem = 0;
}
void xuat()
{
    dem++;
    cout << dem << ". ";
    for(int j = 1; j <= n; j++)
        cout << hv[j] << " ";
    cout << endl;
}
void Try(int i)
{
    for(int j = 1; j <= n; j++)
        if(dd[j] == false)
        {
            hv[i] = j;
            dd[j] = true;
            if(i == n)
                xuat();
            else
                Try(i + 1);
            dd[j] = false;
        }
}
int main()
{
    khoitao();
    Try(1);
}