#include<bits/stdc++.h>
using namespace std;
class Sinhvien
{
    // Thuoc tinh va phuong thuc
    private:
        string id, ten, ns;
        double gpa;
    public:
        // Sinhvien(); // Ham khoi tao khong tham so
        friend istream& operator >> (istream &in, Sinhvien &a);
        friend ostream& operator << (ostream &out, Sinhvien a);
        
        // Cach 1
        // bool operator < (Sinhvien a);

        // Cach 2
        friend bool operator < (Sinhvien a, Sinhvien b);
};

// bool Sinhvien::operator < (Sinhvien a)
// {
//     return this->gpa < a.gpa;
// }

bool operator < (Sinhvien a, Sinhvien b)
{
    return a.gpa < b.gpa;
}

istream& operator >> (istream &in, Sinhvien &a)
{
    cout << "Nhap ID: "; 
    in >> a.id; 
    cout << "Nhap ten: "; in.ignore();
    getline(in, a.ten);
    cout << "Nhap ngay sinh: "; in >> a.ns; 
    cout << "Nhap diem: "; in >> a.gpa;
    return in;
}

ostream& operator << (ostream &out, Sinhvien a)
{
    cout << a.id << " " << a.ten << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}


int main()
{
    // Sinhvien x, y;
    // cin >> x >> y;
    // if(x < y) 
    //     cout << "YES";
    // else 
    //     cout << "NO";

    int n; cin >> n; 
    Sinhvien a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for(Sinhvien x : a)
    {
        cout << x;
    }
    return 0;
}