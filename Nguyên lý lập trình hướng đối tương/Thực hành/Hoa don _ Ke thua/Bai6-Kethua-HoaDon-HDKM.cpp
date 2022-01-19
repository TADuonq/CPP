/*
 * Chuong trinh minh hoa Ke thua voi hai lop HoaDon va HoaDonKM
 */
 
#include<iostream>

#include "HoaDon.cpp"
#include "HoaDonKM.cpp"

using namespace std;

int main()
{
	HoaDon hd1(2, 2000);
	HoaDonKM hdkm1(2, 2000, 1000);
	
	cout << hd1 << endl;
	cout << hdkm1 << endl;
	
	cout << hd1.tongTien() << endl;
	cout << hdkm1.thanhToan() << endl;
	return 0;
}
