//Liệt kê các m-tập con của n-tập

#include<iostream>
using namespace std;

int n, m, count, k;
int a[100], s[100];

void Ghinhan()
{
    int i;
    count++;
    cout << "Tap con thu " << count << " :";
    for(i = 0; i <= m; i++)
        cout << a[i] << " ";
    cout << endl;
}

void MSet()
{
    k = 1;
    s[k] = 1;
    while(k > 0)
    {
        while(s[k] <= n - m + k)
        {
            a[k] = s[k];
            s[k] = s[k] + 1;
            if(k == m)  Ghinhan();
            else
            {
                k++;
                s[k] = a[k - 1] + 1;
            }
        }
        k--;
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