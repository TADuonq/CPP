#include <iostream>
#include<string>
using namespace std;

class congnhan
{
	private:
		float luong;
		int ngaycong;
		string taynghe;
	public:
		void nhapcn()
		{
			cout<<"Nhap muc luong: ";cin>>luong;
			cout<<"Nhap ngay cong: ";cin>>ngaycong;
			cin.ignore();
			cout<<"Tay nghe: ";cin>>taynghe;
		}
		void xuatcn()
		{
			cout<<luong<<"\t"<<ngaycong<<"\t"<<taynghe;
		}

};
class GIANGVIEN{
	private: 
		float hsl,pc;
		string cm,td;
	public:
		void nhapcb()
		{
			cout<<"nhap he so luong: ";cin>>hsl;
			cout<<"nhap phu cap: ";cin>>pc;
			cin.ignore();
			cout<<"Nhap chuyen mon: ";getline(cin,cm);
			cout<<"Nhap trinh do: ";getline(cin,td);
		}
		void xuatcb()
		{
			cout<<hsl<<"\t"<<pc<<"\t"<<cm<<"\t"<<td;
		}
		float tinhluong()
		{
			return hsl+pc;
		}
		
};
class NGUOI : public congnhan,GIANGVIEN
{
	private:
		int mnv;
		string ht;
		int age;
	public:
		void nhap()
		{
			cout<<"nhap ma nhan vien: ";cin>>mnv;
			cin.ignore();
			cout<<"nhap ho ten: ";getline(cin,ht);
			cout<<"nhap tuoi: ";cin>>age;
			nhapcn();
			cout<<"nhap ma nhan vien: ";cin>>mnv;
			cin.ignore();
			cout<<"nhap ho ten: ";getline(cin,ht);
			cout<<"nhap tuoi: ";cin>>age;
			nhapcb();
		}
		void xuat()
		{
			cout<<mnv<<"\t"<<ht<<"\t"<<age;
			xuatcn();
			xuatcb();
		}
};
int main()
{
	int n;
	cout<<"nhap so luong nhan su: ";cin>>n;
	NGUOI a[100];
	for(int i=0;i<n;i++)
	{
		a[i].nhap();
	}
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
	}
	
}
