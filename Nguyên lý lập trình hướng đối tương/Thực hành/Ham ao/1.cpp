#include<iostream>
using namespace std;

class Nguoi
{
    private:
        string ten, diachi;
    public:
        Nguoi(string _ten, string _diachi);
        void nhap();
        void xuat();
}

void Nguoi::nhap()
{
    cout << "Nhap ten sinh vien: ";getline(cin, ten);
    cout << "Nhap dia chi: ";getline(cin, diachi);
}
void Nguoi::xuat()
{
    cout << ten << "\t" << diachi << "\t";
}

class Sinhvien:: public Nguoi
{
    private:
        string msv, ten lop;
    public:
        Sinhvien(string _msv, string _ten, string _diachi, sing _tenlop);
        void nhap();
        void xuat();
} 

void Sinhvien::nhap()
{

}



int main()
{
    
}