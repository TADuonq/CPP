#include <iostream> 
using namespace std;

class Nhansu
{
	protected:
		string mnv, hoten; 
		int tuoi;
	public:
		Nhansu(){};
		~Nhansu(){};
		
		void Nhap()
		{
			cout << "Ma nhan vien: ";cin.ignore(); getline(cin, mnv);
			cout << "Ho ten: ";getline(cin,hoten); 
			cout << "Tuoi: "; cin >> tuoi;
		}
		
		void Xuat()
		{
			cout << "Ma nhan vien: " << mnv;
			cout << "\tHo ten: " << hoten;
			cout << "\tTuoi: " << tuoi;
		}
		
		bool Kt_vehuu()
		{
			if (tuoi>56) return true;
			else return false;
		}
};

class Congnhan:public Nhansu
{
	private:
		int mucluong, ngaycong;
		string taynghe;
	public:
		void NhapCN() 
		{
			Nhansu::Nhap();
			//cin.ignore();
			cout << "Muc luong: "; cin >> mucluong;
			//cout << "Tay nghe: ";getline(cin, taynghe); cin.ignore();
			cout << "Tay nghe: "; cin >> taynghe;
			cout << "Ngay cong: ";cin>>ngaycong;
		}
		void XuatCN() 
		{
			Nhansu::Xuat(); 
			cout << "\tMuc luong: " << mucluong;
			cout << "\tTay nghe: " << taynghe;
			cout << "\tNgay cong: " << ngaycong;
			cout << endl;
		}
		double TinhluongCN() 
		{
			return mucluong * ngaycong;
		}
		
}; 

class Canbo:public Nhansu
{
	private:
		int  hesoluong;
		double phucap;
		string chuyenmon;
		string trinhdo;
	public:
		void NhapCB() 
		{
			Nhansu::Nhap();
			cout << "He so luong: "; cin >> hesoluong;
			cout << "Phu cap: "; cin >> phucap;
			cout << "Chuyen mon: "; cin.ignore(); getline(cin, chuyenmon);
			cout << "Trinh do: "; cin >> trinhdo;
		}
		void XuatCB() 
		{
			Nhansu::Xuat();
			cout <<"\tHe so luong: " << hesoluong;
			cout <<"\tPhu cap: " << phucap;
			cout << "\tChuyen mon: " << chuyenmon;
			cout << "\tTrinh do: " << trinhdo;
			cout << endl;
		}
		double TinhluongCB() 
		{
			return (hesoluong * 1490000)*1.2;
		}
}; 

int main()
{
	int n,m;
	Congnhan cn[100]; 
	Canbo cb[100];
	
	//Nhap cong nhan
	cout << "\nNhap so cong nhan: "; cin >> n;
	cout << "\nNHAP THONG TIN CONG NHAN\n";
	for (int i=0; i<n; i++)
		cn[i].NhapCN();
	
	
	//Nhap can bo
	cout << "\nNhap so can bo: "; cin >> m;
	cout << "\nNHAP THONG TIN CAN BO\n";
	for (int i=0; i<m; i++)
		cb[i].NhapCB();
		
	//Xuat cong nhan
	cout << "\nDANH SACH CONG NHAN\n";
	for (int i=0; i<n; i++)
		cn[i].XuatCN();
		
	//Xuat can bo
	cout << "\nDANH SACH CAN BO\n";
	for (int i=0; i<m; i++)
		cb[i].XuatCB();
	
	//Cong nhan du dieu kien ve huu
	cout << "\nCong nhan du dieu kien ve huu\n";
	for (int i=0; i<n; i++)
		if(cn[i].Kt_vehuu()) cn[i].Xuat();
	
	//Can bo khong du dieu kien ve huu
	cout << "\nCan bo chua du dieu kien ve huu\n";
	for (int i=0; i<m; i++)
		if(!cb[i].Kt_vehuu()) cb[i].Xuat();
	
	//max cong nhan
	int  max = cn[0].TinhluongCN();
	for (int i = 0; i < n; i++) {
		if(max<cn[i].TinhluongCN())
		{
			max = cn[i].TinhluongCN();
		}
	}
	cout <<"\nMax cong nhan: "<<max;
	
	// min can bo
	int min = cb[0].TinhluongCB();
	for (int i = 0; i < m; i++) 
	{
		if (min < cb[i].TinhluongCB())
		{
			min = cb[i].TinhluongCB();
		}
	}
	 cout <<"\nMin can bo: "<<min;
}
