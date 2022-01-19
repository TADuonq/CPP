#include<bits/stdc++.h>
using namespace std;

class VIENCHUC
{
	private:
		string name, ma;
		float hsl;
		int birth;
	public:
		VIENCHUC(){}
		
		virtual void input()
		{
			fflush(stdin);
			cout<<"Ho ten: ";getline(cin,name);
			fflush(stdin);
			cout<<"He so luong: ";cin >>hsl;
			cout<<"Nam sinh: ";cin>>birth;
		}
		
		virtual void display()
		{
			cout<<name<<"\t"<<que<<"\t"<<birth<<"\t";
		}	
		
		virtual long int tien_vien()=0;
		
		int get_birth()
		{
			return birth;
		}
};

class NoiTru:public VIENCHUC
{
private:
	string phong_dieu_tri;
	int so_ngay_nam;
public:
	NoiTru(){}
	
	void input()
	{
		VIENCHUC::input();
		fflush(stdin);
		cout<<"Phong dieu tri: ";getline(cin,phong_dieu_tri);
		cout<<"So ngay nam vien: ";cin>>so_ngay_nam;
	}
		
	void display()
	{
		VIENCHUC::display();
		cout<<phong_dieu_tri<<"\t"<<so_ngay_nam<<endl;
	}
	
	long int tien_vien()
	{
		return so_ngay_nam * 300000;
	}
};

class NgoaiTru:public VIENCHUC
{
private:
	string dia_chi;
	int so_ngay_dieu_tri;
public:
	NgoaiTru(){}
	
	void input()
	{
		VIENCHUC::input();
		fflush(stdin);
		cout<<"Dia chi: ";getline(cin,dia_chi);
		cout<<"So ngay dieu tri: ";cin>>so_ngay_dieu_tri;
	}
	
	void display()
	{
		VIENCHUC::display();
		cout<<dia_chi<<"\t"<<so_ngay_dieu_tri<<endl;
	}
	
	long int tien_vien()
	{
		return so_ngay_dieu_tri * 150000;
	}
};

int main()
{
	int n;
	cout<<"Nhap so benh nhan: ";cin>>n;
	vector <VIENCHUC*> p;
	for(int i=0;i<n;i++)
	{
		int k;
		cout<<"Benh nhan Noi Tru (1), benh nhan Ngoai Tru (2): ";cin>>k;
		VIENCHUC *bn;
		if(k==1)
			bn=new NoiTru;
		else
			bn=new NgoaiTru;
		bn->input();
		p.push_back(bn);
	}
	
	cout<<"Danh sach benh nhan";
	for(int i=0;i<n;i++)
	{
		cout<<"\nBenh nhan thu "<<i+1<<endl;
		p.at(i)->display();
		cout<<"So tien vien phi: "<<p.at(i)->tien_vien();
	}
	
	
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(p[i]->get_birth()>p[j]->get_birth())
				swap(p[i],p[j]);
	
	cout<<"\nDanh sach benh nhan sau khi sap xep"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"\nBenh nhan thu "<<i+1<<endl;
		p.at(i)->display();
		cout<<"So tien vien phi: "<<p.at(i)->tien_vien();
	}
	
	cout<<"\nDanh sach benh nhan tuoi duoi 10"<<endl;
	for(int i=0;i<n;i++)
		if(2022-p[i]->get_birth()<10)
			p.at(i)->display();
	
	long int max=0;
	for(int i=0;i<n;i++)
		if(max<p[i]->tien_vien())
			max=p[i]->tien_vien();
	
	for(int i=0;i<n;i++)
		if(p[i]->tien_vien()==max)
			p.at(i)->display();
}
