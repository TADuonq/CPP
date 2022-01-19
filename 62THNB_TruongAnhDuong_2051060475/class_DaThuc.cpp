#include<iostream>
#include<cmath>
using namespace std;


class DaThuc{
	double a[50];
	int n;
	public:
		DaThuc(){
			n = 0;
			for(int i=0;i<=n;i++)
			{
				a[i] = 0;
			}
		}
		DaThuc(int _n, double _a[50])
		{
			_n = n;
			for(int i=0;i<=n;i++)
				_a[i] = a[i];
		}
		void nhap();
		void xuat();
		double gtri(int x);
		friend DaThuc cong(DaThuc a, DaThuc b);
		friend DaThuc tru(DaThuc a, DaThuc b);
};


void DaThuc::nhap()
{
	cout<<"Nhap n = ";cin>>n;
	cout<<"Nhap he so:\n";
	for(int i=0;i<=n;i++)
	{
		cin>>a[i];
	}	
}

void DaThuc::xuat()
{
	for(int i=0;i<=n;i++)
	{
		if(i==0)
			cout<<a[i];
		else if(i==n&&a[i]>0)
			cout<<"+"<<a[i]<<"x^"<<i<<endl;
		else if(a[i]<0)
			cout<<a[i]<<"x^"<<i;
		else
			cout<<"+"<<a[i]<<"x^"<<i;	
	}	
}

double DaThuc::gtri(int x)
{
	double p = 0;
	for(int i=0;i<=n;i++)
	{
		p += a[i] * pow(x,i); 
	}
	return p;
}

DaThuc cong(DaThuc a, DaThuc b)
{
	DaThuc kq;
	if(a.n<b.n)
		kq.n = b.n;
	else
		kq.n = a.n;
	for(int i=kq.n;i>=0;i--)
	{
		kq.a[i] = a.a[i] + b.a[i];
	}
	

	return kq;
}

DaThuc tru(DaThuc a, DaThuc b)
{
	DaThuc kq;
	if(a.n<b.n)
		kq.n = b.n;
	else
		kq.n = a.n;
		
	for(int i=kq.n; i>=0; i--)
	{
		kq.a[i] = a.a[i] - b.a[i];
	}

	return kq;
}

int main(){
	DaThuc a,b,kq;
	a.nhap();
	b.nhap();
	cout<<"P(x) = ";
	a.xuat();
	cout<<"Q(x) = ";
	b.xuat();
	
	int x;
	cout<<"Nhap gtri cua x = ";cin>>x;
	cout<<"P("<<x<<") = "<<a.gtri(x)<<endl;
	cout<<"Q("<<x<<") = "<<b.gtri(x);
	
	kq = cong(a,b);
	cout<<"\nP(x) + Q(x) = ";kq.xuat();
	
	kq = tru(a,b);
	cout<<"P(x) - Q(x) = ";kq.xuat();
	
}



 
