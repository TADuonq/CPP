#include<iostream>
using namespace std;


//Xây dựng lớp SINHVIEN
class SINHVIEN
{
    protected:
        int MSV;
        char Hoten[20];
        int Tuoi;
    public:
        void Nhap();
        void Xuat();
};

//Định nghĩa thao tác nhap lớp SINHVIEN
void SINHVIEN::Nhap()
{
    cout << "Nhap ma sinh vien: "; 
    cin >> MSV; 
    cout << "Nhap ho ten: "; 
    cin >> Hoten;
    cout << "Nhap tuoi: "; 
    cin >> Tuoi;
}
//Định nghĩa thao tác xuất lớp SINHVIEN
void SINHVIEN::Xuat()
{
    cout << "\n" << setw(6) << MSV << "\n";
    cout << setw(15) << Hoten;
    cout << setw(4) << Tuoi;
    }

//Xây dựng lớp DIEMTONGKET
class DTK:public SINHVIEN
{
    protected:
        float toan, ly, hoa;
    public:
        void Nhap();
        void Xuat();  
        float Tinh_DTB();
        *char Xeploai();
};
//ĐỊnh nghĩa thao tác nhập lớp DTK
void DTK::Nhap()
{
    SINHVIEN::Nhap();
    cout << "Nhap diem toan: ";
    cin >> toan;
    cout << "Nhap diem ly: ";
    cin >> ly;
    cout << "Nhap diem hoa: ";
    cin >> hoa;
}

//Định nghĩa thao tác xuất lớp DTK
void DTK::Xuat()
{
    SINHVIEN::Xuat();
    cout << setw(5) << toan;
    cout << setw(5) << ly;
    cout << setw(5) << hoa;
}

//Định nghĩa thao tác tính điểm trung bình của lớp DTK
float DTK::Tinh_DTB()
{
    return (toan + ly + hoa) / 3;
}
//Định nghĩa thao tác xếp loại lớp DTK
*char DTK::Xeploai()
{
    if(Tinh_DTB() >= 8)                 
        return "Gioi";
    else if (Tinh_DTB() >= 7)      
        return "Kha";
    if (Tinh_DTB() >= 5)        
        return "Trung binh";
    else 
        return "Yeu";
}

void main()
{
    DTK ds[50];         //Tạo danh sách để lưu DTK
    int n, i;
    cout << "\n Nhap so Sinh vien: "; cin >> n;
    cout << "\n NHAP THONG TIN TUNG SINH VIEN \n";
    for(i = 0; i < n; i++)
        ds[i].Nhap();
    cout << "\n DS SINH VIEN DA NHAP \n";
    for(i = 0; i < n; i++)
        ds[i].Xuat();
    cout << "\n DS SINH VIEN CÓ DTB > 8 \n";
    for(i = 0; i < n; i++) 
        if(ds[i].Tinh_DTB() > 8)
            ds[i].Xuat();
    cout << "\n DS SINH VIEN XEP LOAI KHA > 8 \n";
    for(i = 0; i < n; i++) 
        if(strcmp(ds[i].Xeploai(), "Kha") == 0)
            ds[i].Xuat();
    // getch();
    return 0;
}