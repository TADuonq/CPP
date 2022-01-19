#include<iostream>

using namespace std;
double average(double n1, double n2)
{return ((n1+n2) / 2.0);}

double average(double n1, double n2, double n3)
{return ((n1 + n2 + n3) / 3.0);}

int main()
{
    double x, y, z;
    cout<< "Nhap gia tri x, y, z: ";
    cin>>x>>y>>z;
    cout<<"Gia tri trung binh cua "<<x<<" va "<<y<<" la: " <<average(x, y)<<endl;
    cout<<"Gia tri trung binh cua "<<x<<", "<<y<<" va "<<z<<" la: " <<average(x, y, z);
    return 0;
}