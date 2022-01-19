#include<bits/stdc++.h>
using namespace std;

/*
lop: class 
thuoc tinh: attribute
phuong thuc: method. behavior
ham khoi tao: constructor
ham huy: destructor
con tro "this"
setter getter
doi tuong: object
Encapsulation: dong goi
Access modifier: private, public, protected
static
Friend function, Friend class
forward declaration
*/

// class Giaovien;
// class Sinhvien;

class Sinhvien
{
    friend class Giaovien;
    // Thuoc tinh va phuong thuc
    private:
        string id, ten, ns;
        double gpa;
        // static int dem;
    public:
        Sinhvien(); // Ham khoi tao khong tham so
        Sinhvien(string , string , string , double);    // Ham khoi tao co tham so
        void nhap();
        void in();
        double getgpa();
        string getid();
        string getten();
        string getns();
        void setgpa(double);
        // ~Sinhvien(); // Ham huy
        // void tangdem();
        // int getdem();
        // friend void chuanhoa(Sinhvien&);
};

// void chuanhoa(Sinhvien &a)
// {
//     string res = " ";
//     stringstream ss(a.ten);
//     string token;
//     while(ss >> token)
//     {
//         res += toupper(token[0]);
//         for(int i = 1; i < token.length(); i++)
//         {
//             res +=tolower(token[i]);
//         }
//         res += " ";
//     }
//     res.erase(res.length() - 1);
//     a.ten = res;
// }

// int Sinhvien::dem = 0;

//Implemention
// void Sinhvien::tangdem()
// {
//     ++dem;
// }

// int Sinhvien::getdem()
// {
//     return dem;
// }

Sinhvien::Sinhvien()
{
    // cout << "Doi tuong mac dinh duoc tao \n";
    this->id = this->ten = this->ns = "";
    gpa = 0;
}

Sinhvien::Sinhvien(string id, string ten, string ns, double gpa)
{
    this->id = id;
    this->ten = ten;
    this->ns = ns;
    this->gpa = gpa;
}

// Sinhvien::~Sinhvien()
// {
//     // cout << "Doi tuong duoc huy tai day \n";
// }

void Sinhvien::nhap()
{
    // ++dem; // dem = 1
    // this->id = "SV" + string(3 - to_string(dem).length(), '0') + to_string(dem);
    cout << "Nhao ma: \n";      cin >> this->id; cin.ignore();
    cout << "Nhap ten: \n";     getline(cin, this->ten);
    cout << "Nhap ns: \n";      cin >> this->ns;
    cout << "Nhap diem: \n";    cin >> this->gpa;
    // cin.ignore();
}

void Sinhvien::in()
{
    cout << this->id << " " << this->ten << " " << this->ns << "  " << fixed << setprecision(2) << this->gpa << endl;
}

double Sinhvien::getgpa()
{
    return this->gpa;
}

void Sinhvien::setgpa(double gpa)
{
    this->gpa = gpa;
}

bool cmp(Sinhvien a, Sinhvien b)
{
    return a.getgpa() > b.getgpa();
}

// class Giaovien
// {
//     private:   
//         string khoa;
//     public:
//         void update(Sinhvien&);
// };

// void Giaovien::update(Sinhvien& x)
// {
//     x.gpa = 3.50;
// }

int main()
{
    int n;
    cin >> n;
    Sinhvien a[100];
    for(int i = 0; i < n; i++)
    {
        a[i].nhap();
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++)
    {
        a[i].in();
    }


    // Sinhvien x;
    // x.setgpa(2.18);

    // Gan thuoc tinh
    // Sinhvien x;
    // x.nhap();
    // Sinhvien y = x;
    // y.in();

    //Dem 
    // Sinhvien x;
    // x.tangdem();
    // x.tangdem();
    // Sinhvien y;
    // cout << y.getdem() << endl;
    // y.tangdem();
    // Sinhvien z;
    // cout << x.getdem() << " " << y.getdem() << " " << z.getdem() << endl;


    // Sinhvien x;
    // x.nhap();
    // x.in();
    // Sinhvien y;
    // y.nhap();
    // y.in();

    // Ham ban
    // Sinhvien x;
    // x.nhap();
    // Giaovien y;
    // y.update(x);
    // x.in();

    return 0;
}