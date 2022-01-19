#include <iostream>
#include<cmath>
using namespace std;

class Point
{
	public:
		void nhap();
		void xuat();
		double get_tung();
		double get_hoanh();
		double khoanhcach(Point  a,Point b);
	private:
		int tung,hoanh;
};

void Point::nhap()
{
	cout << "Truc tung: "; cin >> tung;
	cout << "Truc hoanh: "; cin >> hoanh;
}

void Point::xuat()
{
	cout << "(" << tung << "," << hoanh << ")" << endl;
}

double Point::get_tung()
{
	return tung;
}

double Point::get_hoanh()
{ 
	return hoanh;
}

double 	Point::khoanhcach(Point  a,Point b)
{
	double c;
	c=sqrt(pow((b.tung - a.tung), 2) + pow((b.hoanh - a.hoanh), 2));
	return c;
}

int main()
{
	Point a, b, c;
    cout <<" Nhap diem thu nhat: \n";
	a.nhap();
    cout <<" Nhap diem thu hai: \n";
	b.nhap();
    cout << "Khoang cach tu a den b la: ";
    c.xuat();
	//khoangcach(a,b);
	//khoangcach(a,b);
}