#include <iostream>
#include<cmath>
using namespace std;

class CPoint
{
	private:
		int x, y;
	public:
		CPoint() {}
		CPoint(int x, int y)
		{
			this->x = x;
			this->y = y;
		}
		void nhap();
		void xuat();
		double get_tung();
		double get_hoanh();
		void dich_phai()
		{
			this->x = x + 1;
			this->y = y;
		}
		friend double khoangcach(CPoint a, CPoint b)
		{
			double c;
			c = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
			return c;
		}
		friend bool kt_thang_hang(CPoint a, CPoint b, CPoint c)
		{
			float d1 = khoangcach(a, b);
			float d2 = khoangcach(b, c);
			float d3 = khoangcach(a, c);
			if (d1 + d2 == d3 || d1 + d3 == d2 || d2 + d3 == d1)
			{
				return true;
			}
			return false;
		}
};

void CPoint::nhap()
{
	cout << "Truc hoanh: "; cin >> x;
	cout << "Truc tung: "; cin >> y;
}

void CPoint::xuat()
{
	cout << "(" << x << "," << y << ")" << endl;
}

double CPoint::get_tung()
{
	return x;
}

double CPoint::get_hoanh()
{
	return y;
}



int main()
{

	CPoint P1(4, 6);
	CPoint P2;
	P2.nhap();
	cout << "Khoang cach giua P1 va P2 la: " << khoangcach(P1, P2) << endl;
	
	//Di chuyen p2 sang phai 1 dv
	P2.dich_phai();

	//kiem tra thang hang
	CPoint P3(2, 4);
	if (kt_thang_hang(P1, P2, P3))
	{
		cout << "3 diem thang hang" << endl;
	}
	else
	{
		cout << "3 diem khong thang hang" << endl;
	}
	return 0;
}