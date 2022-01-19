//Liệt kê các m-tập con của n-tập

#include<iostream>
using namespace std;

int n, m, count;
int a[100];

void Ghinhan()
{
    int i;
    count++;
    cout << "Tap con thu " << count << " :";
    for(i = 0; i <= m; i++)
        cout << a[i] << " ";
    cout << endl;
}

void MSet(int i)
{
    int j;
    for(j = 0; j <= n; j++)
    {
        a[i] = j;
        if(i == m)  Ghinhan();
        else MSet(i + 1);
    }
}

int main()
{
    cout << "Nhap n = ";
    cin >> n;
    cout << "Nhap m = ";
    cin >> m;
    cout << "So tap con " << m <<" phan tu cua tap " << n << " phan tu = " << count << endl;
}