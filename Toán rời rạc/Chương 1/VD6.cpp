#include<bits/stdc++.h>
#include<iostream>
using namespace std;

const char ginp[] = "TSP5.txt";
const int maxN = 100;
int n;
int c[maxN + 1][maxN + 1];
int x[maxN], kq[maxN];
bool cx[maxN + 1];
long Min, cp;

void khoitao()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen(ginp, "r", stdin);
    cin >> n;       // Doc du lieu
    for (int i = 0; i <= n; i++)
        {
        for (int j = 0; j <=n; j++)
            cin >> c[i][j];
        }
    // In du lieu
    cout << "So thanh pho n = " << n << endl;
    cout << "Ma tran chi phi: " << endl;
    for(int i = 1; i <= n; i++)
    {    
        for(int j = 1; j <= n; j++)
            cout << c[i][j] << ' ';
        cout << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; i++)
        cx[i] = 1;
        x[1] = 1;
        cx[1] = 0;
        Min = 100000000;
        cp = 0;
}
void capnhat()
{
    if(cp + c[x[n]][1] < Min)
    {
        Min = cp + c[x[n]][1];
        for(int i = 0; i <= n; i++)
            kq[i] = x[i];
    }
}
void Try(int i)
{
    for(int j = 2; j <= n; j++)
        if(cx[j])
        {
            x[i] = j;
            cp = cp + c[x[i - 1]][j];
            cx[j] = 0;
            if(i == n)
                capnhat();
            else
                Try(i + 1);
            cx[j] = 1;
            cp = cp - c[x[i - 1]][j];
        }
}
void inkq()
{
    cout << "Hanh trinh co chi phi nho nhat: " << Min << endl;
    cout << "Thu tu tham cac thanh pho: " << endl;
    for (int i = 0; i <= n; i++)
        cout << kq[i] << "-->";
    cout << 1 << endl;
}
int main()
{
    khoitao();
    Try(2);
    inkq();
}