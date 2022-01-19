// Cai dat lop HoaDonKM


#include "HoaDonKM.h"
using namespace std;

HoaDonKM::HoaDonKM():HoaDon(),giamGia(1000){}

HoaDonKM::HoaDonKM(int sl, double gc, double gg):HoaDon(sl,gc),giamGia(gg){}

double HoaDonKM::thanhToan()
{
	return (tongTien() - giamGia);
}

void HoaDonKM::setGiamGia(double giamGiaMoi)
{
	giamGia = giamGiaMoi;
}
double HoaDonKM::getGiamGia()
{
	return giamGia;
}

ostream& operator <<(ostream & os, HoaDonKM hdkm)
{
	os << hdkm.getSoLuong() << "-" << hdkm.getGiaCa() << "-" << hdkm.getGiamGia();
	return os;
}

