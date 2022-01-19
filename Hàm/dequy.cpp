#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void nhap(string &str)
{
    cout<<"Nhap xau s: ";getline(cin,str);
}

int chucai(string str)
{
    int dem = 0;
    for(int i = 0;i<str.size();i++)
        if(isalpha(str[i]));
            dem++;
    return dem;
}

int dem_dq(string str, int n)
{
    if(n==0) return 0;
    int d = dem_dq(str, n-1);
        return (isalpha(str[n-1])) ? d+1:d;
}
 

int main()
{
    string s,s1; 
    nhap(s);
    cout<<"\nSo lan xuat hien chu cai k dung de quy: "<<chucai(s)<<endl;
    cout<<"\nDem chu cai dung de quy: "<<dem_dq(s,s.size()-1);
}