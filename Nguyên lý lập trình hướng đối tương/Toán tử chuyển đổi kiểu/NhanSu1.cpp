#include<bits/stdc++.h>
using namespace std;


// Bo sung ham tao, ham huy cua lop co so va lop dan xuat
// Tao danh sach Cong nhan dung ham tao khong tham so
// Tao dach sach Can bo dung ham tao co tham so
class NGUOI
{
	protected:
		string mnv, hoten;
		int tuoi;
	public:
		NGUOI();
		NGUOI(string _mnv, string _hoten, int _tuoi);
		void nhap();
		void xuat();
		bool vehuu();
		~NGUOI()
		{
			mnv = "";
			hoten = "";
			tuoi = 0;
		};	
};

NGUOI::NGUOI()
{
	this->mnv = "";
	this->hoten = "";
	this->tuoi = 0;
}

NGUOI::NGUOI(string _mnv, string _hoten, int _tuoi)
{
	mnv = _mnv;
	hoten = _hoten;
	tuoi = _tuoi;
}

void NGUOI::nhap()
{
	fflush(stdin);
	cout <<"Nhap MNV: "; cin >> mnv;
	fflush(stdin);
	cout <<"Nhap ho ten: "; getline(cin, hoten);
	fflush(stdin);
	cout <<"Nhap tuoi: "; cin >> tuoi;
}

void NGUOI::xuat()
{
	cout << mnv << "\t" <<hoten << "\t" << tuoi << "\t";
}

bool NGUOI::vehuu()
{
	if(tuoi >= 55) return true;
	return false;
}

class congnhan : public NGUOI
{
	float mucluong;
	int ngaycong;
	string taynghe;
	public:
		congnhan();
		congnhan(string _mnv, string _hoten, int _tuoi, float _mucluong, int ngaycong, string taynghe);
		void nhap();
		void xuat();
		double tinhluong();
		~congnhan()
		{
			mucluong = 0;
			ngaycong = 0;
			taynghe = "";
		};
};

congnhan::congnhan() : NGUOI()
{
	mucluong = 0;
	ngaycong = 0;
	taynghe = "";
}

congnhan::congnhan(string _mnv, string _hoten, int _tuoi, float _mucluong, int _ngaycong, string _taynghe) : NGUOI(_mnv, _hoten, _tuoi)
{
	mucluong = _mucluong;
	ngaycong = _ngaycong;
	taynghe = _taynghe;
}

void congnhan::nhap()
{
	NGUOI::nhap();
	fflush(stdin);
	cout <<"Muc luong: "; cin >> mucluong;
	fflush(stdin);
	cout <<"Ngay cong: "; cin >> ngaycong;
	fflush(stdin);
	cout <<"Tay nghe: "; getline(cin, taynghe);
}

void congnhan::xuat()
{
	NGUOI::xuat();
	cout << mucluong << "\t" << ngaycong <<"\t" << taynghe << endl;
}

double congnhan::tinhluong()
{
	return mucluong*ngaycong;
}

class GIANGVIEN:public NGUOI
{
	float hesoluong;
	float phucap;
	string chuyenmon, trinhdo;
	public:
		GIANGVIEN();
		GIANGVIEN(string _mnv, string _hoten, int _tuoi, float _hesoluong, float _phucap, string chuyenmon, string trinhdo);
		void nhap();
		void xuat();
		double tinhluong();
		~GIANGVIEN()
		{
			hesoluong = 0;
			phucap = 0;
			chuyenmon = "";
			trinhdo = "";
		};
};

GIANGVIEN::GIANGVIEN() : NGUOI()
{
	hesoluong = 0;
	phucap = 0;
	chuyenmon = "";
	trinhdo = "";
}

GIANGVIEN::GIANGVIEN(string _mnv, string _hoten, int _tuoi, float _hesoluong, float _phucap, string _chuyenmon, string _trinhdo): NGUOI(_mnv, _hoten, _tuoi)
{
	hesoluong = _hesoluong;
	phucap = _phucap;
	chuyenmon = _chuyenmon;
	trinhdo = _trinhdo;
}

void GIANGVIEN::nhap()
{
	NGUOI::nhap();
	cout <<"He so luong: "; cin >> hesoluong;
	cout <<"Phu cap: "; cin >> phucap;
	fflush(stdin);
	cout <<"Chuyen mon: "; getline(cin, chuyenmon);
	fflush(stdin);
	cout <<"Trinh do: "; getline(cin, trinhdo);
}

void GIANGVIEN::xuat()
{
	NGUOI::xuat();
	cout << hesoluong << "\t" << phucap << "\t" << chuyenmon <<"\t" << trinhdo << endl;
}

double GIANGVIEN::tinhluong()
{
	return hesoluong*1490*(1+phucap/100.0);
}



int main()
{
	int n = 3;
	int m =3;
	congnhan a[n];
	// for(int i=0; i<n; i++)
	// {
	// 	a[i] = a[i].nhap();
	// }
	cout << "\n---DANH SACH CONG NHAN:\n";
	for(int i=0; i<n; i++)
	{
		a[i].xuat();
	}
	GIANGVIEN b[m];
	for(int i=0; i<m; i++)
	{
		a[i].xuat();
	}
	b[0] = GIANGVIEN("CB1", "Can bo A", 56, 1.5, 20, "QTKD", "Gioi");
	b[1] = GIANGVIEN("CB2", "Can bo B", 38, 1.2, 10, "CNTT", "Gioi");
	b[2] = GIANGVIEN("CB3", "Can bo C", 50, 1.3, 18, "QTKD", "Kha");
	
	cout << "\n---DANH SACH CAN BO:\n";
	for(int i=0; i<3; i++){
		b[i].xuat();
	}
	cout << "\n---DANH SACH CONG NHAN DU DIEU KIEN VE HUU:\n";
	for(int i=0; i<n; i++)
	{
		if(a[i].vehuu() == true) a[i].xuat();
	}
	
	cout << "\n---DANH SACH CAN BO CHUA DU DIEU KIEN VE HUU:\n";
	for(int i=0; i<m; i++)
	{
		if(b[i].vehuu() == false) b[i].xuat();
	}
	
	cout << "\n---Tien luong cao nhat trong cong nhan: ";
	float luongcn_max = a[0].tinhluong();
	for(int i=1; i<n ; i++)
	{
		if(a[i].tinhluong() > luongcn_max) luongcn_max = a[i].tinhluong();
	}
	cout << luongcn_max << endl;
	
	cout << "\n---Tien luong thap nhat trong can bo: ";
	float luongcb_min = b[0].tinhluong();
	for(int i=1; i<m ; i++)
	{
		if(b[i].tinhluong() < luongcb_min) luongcb_min = b[i].tinhluong();
	}
	cout << luongcb_min << endl;
	
	return 0;
}










