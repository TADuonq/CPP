#include<bits/stdc++.h>
using namespace std;

void input (string &str)
{
    cout<<"Nhap vao mot xau ki tu: ";
    getline(cin,str);
}

int dem(string str)
{
    int dem=0;
    for(int i=0;i<str.size();i++)
        if(isalpha(str[i]))
            dem++;
    return dem;
}

int dem_dq(string str, int n)
{
    if(n==0)
        return 0;
    int d=dem_dq(str,n-1);
    return (isalpha(str[n-1]))?d+1:d;
}

int main()
{
    string str;
    input(str);
    cout<<"Dem chu cai khong dung de quy: "<<dem(str)<<endl;
    cout<<"Dem chu cai dung de quy: "<<dem_dq(str,str.size())<<endl;
}
string them (string str)
{
    str.insert(str.find("gmail.com"),"@");
    return str;
}