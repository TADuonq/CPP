#include<bits/stdc++.h>
using namespace std;

class Phanso{
	int tu,mau;
public:
	Phanso(){}
	Phanso(int tu, int mau):tu(tu),mau(mau)
	{
	}
	~Phanso(){}
	Phanso(const Phanso &n)
	{
 		tu=n.tu;
 		mau=n.mau;
	}
	void input()
	{
		cout<<"Nhap phan so:"<<endl;
		cout<<"Tu so: ";cin>>tu;
		cout<<"Mau so: ";cin>>mau;
	}
	void display()
	{
		if (mau<0)
		{
			this->tu=-tu;
			this->mau=-mau;
		}
		if(mau==0)
			cout<<"Day khong phai phan so!"<<endl;
		else if(tu==0)
			cout<<0<<endl;
		else if(mau==1)
			cout<<tu<<endl;
		else if(mau==tu)
			cout<<1<<endl;
		else
			cout<<tu<<"/"<<mau<<endl;
	}
	Phanso sum(Phanso ps1, Phanso ps2)
	{
		Phanso kq;
		kq.tu=ps1.tu*ps2.mau+ps1.mau*ps2.tu;
		kq.mau=ps1.mau*ps2.mau;
		return kq;
	}
	Phanso minus(Phanso ps1, Phanso ps2)
	{
		Phanso kq;
		kq.tu=ps1.tu*ps2.mau-ps1.mau*ps2.tu;
		kq.mau=ps1.mau*ps2.mau;
		return kq;		
	}
	Phanso div(Phanso ps1, Phanso ps2)
	{
		Phanso kq;
		kq.tu=ps1.tu*ps2.mau;
		kq.mau=ps1.mau*ps2.tu;
		return kq;
	}
	Phanso multi(Phanso ps1, Phanso ps2)
	{
		Phanso kq;
		kq.tu=ps1.tu*ps2.tu;
		kq.mau=ps1.mau*ps2.mau;
		return kq;
	}	
};
int main()
{
	Phanso ps1, ps2, ps3, ps5(5,7);
	ps1.input();
	Phanso ps4(ps1);
//	ps2.input();
//	cout<<"Cong 2 phan so: ";
//	ps3=ps3.sum(ps1,ps2);
//	ps3.display();
//	cout<<"Tru 2 phan so: ";
//	ps3=ps3.minus(ps1,ps2);
//	ps3.display();
//	cout<<"Tich 2 phan so: ";
//	ps3=ps3.multi(ps1,ps2);
//	ps3.display();
//	cout<<"Thuong 2 phan so: ";
//	ps3=ps3.div(ps1,ps2);
//	ps3.display();
	cout<<"Cong 2 phan so: ";
	ps3=ps3.sum(ps4,ps5);
	ps3.display();
	
	
}
