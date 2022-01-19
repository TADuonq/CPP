//Liệt kê xâu nhị phân độ dài n

#include<iostream>
using namespace std;
int n, count;
int b[100];

void Ghinhan()
{
    int i,j;
    count++;
    cout << "Xau thu" << count << " :";
    for(i = 1; i <=n; i++)
    {
        j = b[i];
        cout << j << " ";
    }
    cout << endl;
}
void Xau(int i)
{
    int j;
    for(j = 1; j <= n; j++)
    {
        b[i] = j;
        if(i == n) Ghinhan();
        else Xau(i + 1);
    }
}
int main()
{
    cout << "Nhap n = ";
    cin >> n;
    count = 0; Xau(1);
    cout << "So luong xau = " << count << endl;
}