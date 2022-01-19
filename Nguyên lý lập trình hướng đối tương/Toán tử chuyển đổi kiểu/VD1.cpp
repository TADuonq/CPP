#include<iostream>
using namespace std;
int ngay[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
class N_Date
{
    int d, m, y;
public:
    //Toán tử chuyển đổi kiểu
    operator int();
    // Định nghĩa phương thức nhập xuất
    friend ostream& operator << (ostream &out, N_Date x);
    friend istream& operator >> (istream &in, N_Date &x);
};
istream& operator >> (istream &in, N_Date &x)
{
    cout << "Ngay: ";   in >> x.d;
    cout << "Thang: ";  in >> x.m;
    cout << "Nam: ";    in >> x.y;
    return in;
}
ostream& operator << (ostream &out, N_Date x)
{
    out << x.d << "/" << x.m << "/" << x.y;
    return out;
}
N_Date::operator int()
{
    int s = 0, i;
    if(y == 1900)
    {
        s = s + d;
        for(i = 0; i < m; i++)      s = s + ngay[i];
    }
    else
    {
        s = s + d;
        s = s + (y -1900) * 365;
        for(i = 1900; i < y; i++)
            if((i%4 == 0) && (i%100 != 0) or (i%400 == 0))      s = s + 1;
        for(i = 0; i < m; i++)
        {
            s = s + ngay[i];
            if(((y%400 == 0) or (y%4 == 0) && (y%100 != 0)) && (i == 2))      s = s + 1;
        }
    }
    return s;
}
int main()
{
    N_Date x;
    long n;
    cout << "Nhap ngay x: \n";
    cin >> x;
    n = long(x);
    cout<<"\n Ngay x = " << x;
    cout << "\n So nguyen tuong ung: " << n;
    // getch();
}