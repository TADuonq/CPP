//Liệt kê xâu nhị phân độ dài n

#include<iostream>
using namespace std;
int n, count, k;
int b[100], s[100];

void Ghinhan()
{
    int i, j;
    count++;
    cout << "Xau thu" << count << " :";
    for ( i = 0; i <= n; i++)
    {
        j = b[i];
        cout << j << " ";
    }
    cout << endl;
}

void Xau()
{
    k = 1;
    s[k] = 0;
    while (k > 0)
    {
        b[k] = s[k];
        s[k] = s[k] + 1;
        if(k == n) Ghinhan();
        else
        {
            k++;
            s[k] = 0;
        }
    }
    k--;        //Quy lui
}

int main()
{
    cout << "Nhap n = ";
    cin >> n;
    count = 0;
    Xau();
    cout << "So luong xau = " << count << endl;
}