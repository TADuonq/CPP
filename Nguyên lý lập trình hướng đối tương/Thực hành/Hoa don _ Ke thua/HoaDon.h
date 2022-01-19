// Vi du ve ke thua
// Dinh nghia giao dien lop HoaDon

#ifndef HOADON_H
#define HOADON_H

#include<iostream>
#include <string>
using namespace std;

class HoaDon
{
	private:
		int soLuong;
		double giaCa;
	public:
		// Ham khoi tao
		HoaDon();
		HoaDon(int sl, double gc);
		
		// Ham thanh vien
		double tongTien();
		void setSoLuong(int soLuongMoi);
		void setGiaCa(double giaMoi);
		
		int getSoLuong();
		double getGiaCa();
		
		// Ham nap chong toan tu
//		friend istream& operator >>(istream &, HoaDon &);
		friend ostream& operator <<(ostream & os, HoaDon hd);
//	protected:			
};

#endif
