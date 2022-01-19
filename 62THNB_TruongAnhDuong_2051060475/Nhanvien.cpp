#include<bits/stdc++.h>
using namespace std;

class Nhanvien
{
    private:
        string ma, ten, gt, ns, dc, mst, hd;
    public:
        Nhanvien();
        friend ostream& operator << (ostream&, Nhanvien);
        friend istream& operator >> (istream&, Nhanvien&);
};

Nhanvien::Nhanvien()
{
    ma = ten = gt = ns = dc = mst = hd = "";
}
ostream& operator << (ostream& out, Nhanvien a)
{
    out << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd << endl;
}

istream& operator >> (istream& in, Nhanvien &a)
{
    a.ma = "00001";
    getline(in, a.ten);
    in >> a.gt >> a.ns;
    in.ignore();
    getline(in, a.dc);
    in >> a.mst >> a.hd;
    return in;
}

#define a() a

int main()
{
    Nhanvien a();
    cin >> a;
    cout << a;
    return 0;
}