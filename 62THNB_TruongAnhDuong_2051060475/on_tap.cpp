#include <iostream>
#include <string>
#include <vector>

using namespace std;

class NV
{
	protected:
		string ho_ten;
		string ngay_sinh;
	public:
		NV() {}

		NV(string ho_ten, string ngay_sinh)
		{
			this->ho_ten = ho_ten;
			this->ngay_sinh = ngay_sinh;
		}
		virtual void nhap()
		{
			cin.ignore();
			cout << "Ho ten: "; getline(cin, ho_ten);
			cout << "Ngay sinh: "; getline(cin, ngay_sinh);
		}
		virtual void xuat()
		{
			cout << ho_ten << "\t" << ngay_sinh;
		}
		virtual int tinh_luong() = 0;
		string getHo_ten()
		{
			return ho_ten;
		}
};

class NVVANPHONG : public NV
{
	protected:
		int so_ngay_lam_viec;
		int tro_cap;
	public:
		NVVANPHONG() {}
		NVVANPHONG(string ho_ten, string ngay_sinh, int so_ngay_lam_viec, int tro_cap) : NV(ho_ten, ngay_sinh)
		{
			this->so_ngay_lam_viec = so_ngay_lam_viec;
			this->tro_cap = tro_cap;
		}
		void nhap()
		{
			NV::nhap();
			cin.ignore();
			cout << "So ngay lam viec: "; cin >> so_ngay_lam_viec;
			cout << "Tro cap: "; cin >> tro_cap;
		}
		void xuat()
		{
			NV::xuat();
			cout << "\t" << so_ngay_lam_viec << "\t" << tro_cap << endl;
		}
		int tinh_luong()
		{
			return so_ngay_lam_viec * 200000 + tro_cap;
		}
};

class NVSANXUAT : public NV
{
	protected:
		int luong_co_ban;
		int so_san_pham;
	public:
		NVSANXUAT() {}
		NVSANXUAT(string ho_ten, string ngay_sinh, int luong_co_ban, int so_san_pham) : NV(ho_ten, ngay_sinh)
		{
			this->luong_co_ban = luong_co_ban;
			this->so_san_pham = so_san_pham;
		}
		void nhap()
		{
			NV::nhap();
			cin.ignore();
			cout << "So ngay lam viec: "; cin >> luong_co_ban;
			cout << "Tro cap: "; cin >> so_san_pham;
		}
		void xuat()
		{
			NV::xuat();
			cout << "\t" << luong_co_ban << "\t" << so_san_pham << endl;
		}
		int tinh_luong()
		{
			return luong_co_ban + 2000 * so_san_pham;
		}
};


class NVQUANLY : public NV
{
	protected:
		int luong_co_ban;
		int he_so_chuc_vu;
		int thuong;
	public:
		NVQUANLY() {}
		NVQUANLY(string ho_ten, string ngay_sinh, int luong_co_ban, int he_so_chuc_vu, int thuong) : NV(ho_ten, ngay_sinh)
		{
			this->luong_co_ban = luong_co_ban;
			this->he_so_chuc_vu = he_so_chuc_vu;
			this->thuong = thuong;
		}
		void nhap()
		{
			NV::nhap();
			cin.ignore();
			cout << "So ngay lam viec: "; cin >> luong_co_ban;
			cout << "Tro cap: "; cin >> he_so_chuc_vu;
		}
		void xuat()
		{
			NV::xuat();
			cout << "\t" << luong_co_ban << "\t" << he_so_chuc_vu << endl;
		}
		int tinh_luong()
		{
			return luong_co_ban * he_so_chuc_vu + thuong;
		}
};


bool TimKiemTheoHT(string ho_ten, vector<NV*>v)
{
	for (auto i : v)
	{
		if (i->getHo_ten() == ho_ten)
			return true;
	}
	return false;
}

void output(vector<NV*>v)
{
	cout << "Thong tin cua cac nhan vien: " << endl;
	for (auto i : v)
	{
		i->xuat();
	}
	cout << "\nTinh luong cho tung nhan vien: " << endl;
	for (auto i : v)
	{
		cout << i->getHo_ten() << " - " << i->tinh_luong() << endl;
	}
}
void tinh_luong_cty(vector<NV*>v)
{
	cout << "\nTong luong cua cty: ";
	int sum = 0;
	for (auto i : v)
	{
		sum += i->tinh_luong();
	}
	cout << sum << endl;
}
int main()
{
	vector<NV*>v(3);
	v[0] = new NVVANPHONG("Ha", "2001", 30, 500000);			 //(ht - namsinh - songaylamviec-trocap)
	v[1] = new NVSANXUAT("Vi", "1999", 2000000, 50);			//(ht - namsinh - luong - sosp)
	v[2] = new NVQUANLY("Huy", "1987", 5000000, 2, 1000000);	//(ht-namsinh-luong-hschucvu-thuong)

	output(v);
	tinh_luong_cty(v);


	cout << "\nTim kiem 1 nhan vien theo ten:" << endl;
	string hoten;
	cout << "Nhap ho ten can tim kiem: "; getline(cin, hoten);
	if (TimKiemTheoHT(hoten, v))
		cout << "Tim thay nhan vien " << endl;

	else
		cout << "khong tim thay " << endl;
	return 0;
}
