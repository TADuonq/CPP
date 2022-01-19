#include <iostream>
using namespace std;
class MayIn
{
private:
	double trong_luong;
	int nam_sx;
	string hang_sx;
public:
	MayIn(double trong_luong, int nam_sx, string hang_sx)
	{
		this->trong_luong = trong_luong;
		this->nam_sx = nam_sx;
		this->hang_sx = hang_sx;
	}
	MayIn(){}
	void nhap()
	{
		cout << "Trong luong: "; cin >> trong_luong;
		cout << "Nam san xuat: "; cin >> nam_sx;
		cout << "Hang san xuat: "; cin >> hang_sx;
	}
	void xuat()
	{
		cout << "Trong luong: " << trong_luong << endl;
		cout << "Nam san xuat: " << nam_sx << endl;
		cout << "Hang san xuat: " << hang_sx << endl;
	}
};
class MayInKim : public MayIn
{
private:
	int so_kim;
	int toc_do_in;
public:
	MayInKim(double trong_luong, int nam_sx, string hang_sx, int so_kim, int toc_do_in):MayIn(trong_luong, nam_sx, hang_sx)
	{
		this->so_kim = so_kim;
		this->toc_do_in = toc_do_in;
	}
	MayInKim():MayIn(){}
	void nhap()
	{
		MayIn::nhap();
		cout << "So kim: "; cin >> so_kim;
		cout << "toc_do_in: "; cin >> toc_do_in;
	}
	void xuat()
	{
		MayIn::xuat();
		cout << "So kim: " << so_kim << endl;
		cout << "Toc do in: " << toc_do_in << endl;
	}
};

class MayInLaser : public MayIn
{
private:
	int do_phan_giai;
	int toc_do_in;
public:	
	MayInLaser(double trong_luong, int nam_sx, string hang_sx, int do_phan_giai, int toc_do_in):MayIn(trong_luong, nam_sx, hang_sx)
	{
		this->do_phan_giai = do_phan_giai;
		this->toc_do_in = toc_do_in;
	}
	MayInLaser():MayIn()
	{
		
	}
	void nhap()
	{
		MayIn::nhap();
		cout << "toc_do_in: "; cin >> toc_do_in;
		cout << "Do phan giai: "; cin >> do_phan_giai;
	}
	void xuat()
	{
		MayIn::xuat();
		cout << "Toc do in: " << toc_do_in << endl;
		cout << "Do phan giai: "; cout << do_phan_giai;
	}
};
int main()
{
	MayInKim mayinkim;
	mayinkim.nhap();
	mayinkim.xuat();
	MayInLaser mayinlaser;
	mayinlaser.nhap();
	mayinlaser.xuat();
}
