// Vi du ve ke thua
// Dinh nghia giao dien lop HoaDonKM

#ifndef HOADON_KM_H
#define HOADON_KM_H

#include<iostream>
#include <string>
#include "HoaDon.h"

using namespace std;

class HoaDonKM: public HoaDon
{
	private:
		double giamGia;
	public:
		// Ham khoi tao
		HoaDonKM();
		HoaDonKM(int sl, double gc, double gg);
		
		// Ham thanh vien
		double thanhToan();
		void setGiamGia(double giamGiaMoi);
		double getGiamGia();
		
		// Ham nap chong toan tu
//		friend istream& operator >>(istream &, HoaDonKM &);
		friend ostream& operator <<(ostream & os, HoaDonKM hdkm);
};

#endif
