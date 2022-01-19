// Cai dat lop HoaDon

#include "HoaDon.h"

using namespace std;

HoaDon::HoaDon()
{
	soLuong = 1;
	giaCa = 10000;
}

HoaDon::HoaDon(int sl, double gc)
{
	soLuong = sl;
	giaCa = gc;
}

double HoaDon::tongTien()
{
	return soLuong * giaCa;
}

void HoaDon::setSoLuong(int soLuongMoi)
{
	soLuong = soLuongMoi;
}

void HoaDon::setGiaCa(double giaMoi)
{
	giaCa = giaMoi;
}

int HoaDon::getSoLuong()
{
	return soLuong;
}

double HoaDon::getGiaCa()
{
	return giaCa;
}

ostream& operator <<(ostream & os, HoaDon hd)
{
	os << hd.getSoLuong() << "-" << hd.getGiaCa();
	return os;
}

