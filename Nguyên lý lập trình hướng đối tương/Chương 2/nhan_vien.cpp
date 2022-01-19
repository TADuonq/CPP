#include <bits/stdc++.h>
using namespace std;

struct nhanvien{
	string mnv,hoten;
	float luong;
};

nhanvien *nhap( nhanvien *nv, int &n){
	cout << "So nhan vien: "; cin >> n;
	nv = new nhanvien[n];
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout <<"Nhap ten: "; getline(cin,(*(nv+i)).hoten);
		fflush(stdin);
		cout <<"Ma nhan vien: "; getline(cin,(*(nv+i)).mnv);
		cout <<"Luong: "; cin >>(*(nv+i)).luong;
	}
	return nv;
}

void xuat(nhanvien *nv, int n){
	for(int i=0;i<n;i++){
		cout <<"Ho ten: " << (*(nv+i)).hoten;
		cout <<"\tMa nhan vien: " << (*(nv+i)).mnv;
		cout <<"\tLuong: " <<(*(nv+i)).luong <<endl;
	}
}

int main(){
	int n;
	nhanvien *nv = nhap(nv,n);
	cout <<"Danh sach nhan vien: \n";
	xuat(nv,n);
}

