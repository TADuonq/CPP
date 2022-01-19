#include<iostream>
#include<string>
#include<vector>

using namespace std;
class NGUOI
{
	protected:
		string ma_can_bo,ho_ten,ma_don_vi;
		float he_so_luong;
		int nam_sinh;
	public:
		NGUOI(){};
		NGUOI(string _ma_can_bo,string _ho_ten,string _ma_don_vi,float _he_so_luong,int _nam_sinh):ma_can_bo(_ma_can_bo),ho_ten(_ho_ten),ma_don_vi(_ma_don_vi),he_so_luong(_he_so_luong),nam_sinh(_nam_sinh){};
		virtual void nhap()
        {
			cout<<"Ma can bo: ";cin.ignore();getline(cin,ma_can_bo);
			cout<<"Ho ten: ";getline(cin,ho_ten);
			cout<<"Ma don vi: ";getline(cin,ma_don_vi);
			cout<<"He so luong: ";cin>>he_so_luong;
			cout<<"Nam sinh: ";cin>>nam_sinh;
		}
		virtual void xuat()
        {
			cout<<ma_can_bo;
			cout<<"\t"<<ho_ten;
			cout<<"\t"<<ma_don_vi;
			cout<<"\t"<<he_so_luong;
			cout<<"\t"<<nam_sinh;
		}
		virtual long long tinh_luong()
        {
			return 0;
		}
};
class CBPHONGBAN:public NGUOI
{
	private:
		string chuc_danh;
		float phu_cap;
	public:
		CBPHONGBAN(){};
		CBPHONGBAN(string _ma_can_bo,string _ho_ten,string _ma_don_vi,float _he_so_luong,int _nam_sinh,string _chuc_danh,float _phu_cap):NGUOI(_ma_can_bo,_ho_ten,_ma_don_vi,_he_so_luong,_nam_sinh)
        {
			this->chuc_danh = _chuc_danh;
			this->phu_cap = _phu_cap;
		}
		void nhap()
        {
			NGUOI::nhap();
			cout<<"Chuc danh: ";cin.ignore();getline(cin,chuc_danh);
			cout<<"Phu cap: ";cin>>phu_cap;
		}
		void xuat(){
			NGUOI::xuat();
			cout<<"\t"<<chuc_danh;
			cout<<"\t"<<phu_cap;
			cout<<endl;
		}
		long long tinh_luong()
        {
			return (he_so_luong*2000000)+phu_cap;
		}
};
class GIANGVIEN:public NGUOI
{
	private:
		string chuyen_nganh;
		string hoc_vi;
		int hang_giang_vien;
	public:
		GIANGVIEN(){};
		GIANGVIEN(string _ma_can_bo,string _ho_ten,string _ma_don_vi,float _he_so_luong,int _nam_sinh,string _chuc_danh,float _phu_cap,string _chuyen_nganh,string _hoc_vi,int _hang_giang_vien)
        {
			this->chuyen_nganh=_chuyen_nganh;
			this->hoc_vi = _hoc_vi;
			this->hang_giang_vien = _hang_giang_vien;
		}
		void nhap(){
			NGUOI::nhap();
			cout<<"Chuyen nghanh: ";cin.ignore();getline(cin,chuyen_nganh);
			cout<<"Hoc vi: ";getline(cin,hoc_vi);
			cout<<"Hang giang vien: ";cin>>hang_giang_vien;
		}
		void xuat()
        {
			NGUOI::xuat();
			cout<<"\t"<<chuyen_nganh;
			cout<<"\t"<<hoc_vi;
			cout<<"\t"<<hang_giang_vien;
		}
		long long tinh_luong()
        {
				return he_so_luong * 2000000*1.25;
		}
		
};
int main ()
{
	vector <NGUOI *> N;
	int n;
	cout << "Nhap so nguoi: ";
    cin >> n;
	for(int i = 0; i < n; i++)
    {
		cout << "Ban muon nhap nhan vien CBPHONGBAN (1) hay GIANGVIEN(2): ";
		int k;
		cin >> k;
		NGUOI * ng;
		// tuy vao nguoi dung chon doi tuong nao de nhap 
		if(k == 1)
        {
			ng = new CBPHONGBAN; // neu la 1 khoi tao can bo phong ban
		}
		else
			ng = new GIANGVIEN; // neu khong phai 1 khoi tao giang vien
		ng->nhap(); // tuy thuoc vao doi tuong minh chon ma ma su dung ham nhap 
		N.push_back(ng); // dua vao vector
	}
	// xuat
	for(int i = 0; i < N.size(); i++){
		N.at(i)->xuat(); // tuy vao doi tuong la gi thi ham xuat duoc goi dung ra the
	}
	// in ra giang vien dong thue
	cout<<"Danh sach can bo va giang vien phai dong thue: "<<endl;
	for(int i = 0; i < N.size();i++){
		if(N.at(i)->tinh_luong()>5000000)
        {
			N.at(i)->xuat(); // tuy vao doi tuong la gi thi ham tinh luong se duoc goi ra
		}
	}
}
