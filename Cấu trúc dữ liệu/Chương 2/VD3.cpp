//Liệt kê hoán vị

#include<iostream>
using namespace std;
int n, m, count;
int a[100];
int Ghinhan()
{
    int i, j;
    count++;
    cout << "Hoa vi thu " << count << " :";
    for (i = 0; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}
bool UCV(int j, int k)
{
    int i;
    for(i = 0; i <= k - 1; i++)
        if(j == a[i])   return false;
    return true;
}
void Hoanvi(int i)
{
    int j;
    for(j = 0; j <= n; j++)
        if(UCV(j, i))
        {
            a[i] = j;
            if(i == n)  Ghinhan();
            else Hoanvi(i + 1);
        }
}
int main()
{
    cout << "Nhap n = ";
    cin >> n;
    count = 0;
    Hoanvi(1);
    cout << "So hoan vi = " << count;
}