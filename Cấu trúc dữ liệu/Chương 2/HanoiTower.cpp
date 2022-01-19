#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void HanoiTower(int, char, char, char);
int i = 0;
void HanoiTower(int n, char start, char finish, char spare)
{
    if(n == 1)
    {
        cout << "Dich chuyen dia tu coc" << start << " den coc" << finish << endl;
        i++;
        return;
    }
    else
    {
        HanoiTower(n, start, finish, spare);
        HanoiTower(n - 1, start, spare, finish);
        HanoiTower(n - 1, spare, finish, start);
    }
}
int main()
{
    int n;
    cout << "Nhap so dia = ";
    cin >> n;
    HanoiTower(n, 'a', 'c', 'b');
    cout << "Tong so lan di chuyen dia = " << i << endl;
    return 0;
}