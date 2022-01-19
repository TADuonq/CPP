#include <iostream>
#include <algorithm>
using namespace std;
class ps
{
	private:
		int ts, ms;
	public:
		ps()
		{
			ts = 0;
			ms = 1;
		}
		ps(int ts, int ms)
		{
			this->ts = ts;
			this->ms = ms;
		}
		ps(const ps& a)
		{
			this->ts = a.ts;
			this->ms = a.ms;
		}
		void nhap();
		void xuat();
		ps cong(ps a, ps b);
		ps tru(ps a, ps b);
		void rutgon();
		ps nhan(ps a, ps b);
		ps chia(ps a, ps b);
		~ps(){};
};
void ps::xuat()
{
	if (ms<0)
	{
		ts = -ts;
		ms = -ms;
	}
	if (ms == 1)
	{
		cout << ts << endl;
	}
	else
	{
		if (ts == 0)	cout <<"0";
		else	cout << ts << "/" << ms;
		cout << endl;
	}
}
void ps::nhap()
{
	cout << "\n";
	cout << "Nhap tu so: ";	cin >> ts;
	cout << "Nhap mau so: "; cin >> ms;
	if (ms<0)
	{
		ts = -ts;
		ms = -ms;
	}
}
void ps::rutgon()
{
	int temp = __gcd(ts, ms);
	ts /= temp;
	ms /= temp;
}
ps ps::cong(ps a, ps b)
{
	ps kq;
	kq.ts = a.ts*b.ms + b.ts*a.ms;
	kq.ms = a.ms*b.ms;
	kq.rutgon();
	return kq;
}
ps ps::tru(ps a, ps b)
{
	ps kq;
	kq.ts = a.ts*b.ms - b.ts*a.ms;
	kq.ms = a.ms*b.ms;
	kq.rutgon();
	return kq;
}
ps ps::nhan(ps a, ps b)
{
	ps kq;
	kq.ts = a.ts * b.ts;
	kq.ms = a.ms * b.ms;
	kq.rutgon();
	return kq;
}
ps ps::chia(ps a, ps b)
{
	ps kq;
	kq.ts = a.ts * b.ms;
	kq.ms = a.ms * b.ts;
	kq.rutgon();
	return kq;
}
int main()
{
	ps obj1, obj2, obj3;
	obj1.nhap(); obj2.nhap();
	cout << "\nCong 2 phan so: ";
	obj3 = obj3.cong(obj1, obj2); obj3.xuat();
	cout << "\nTru 2 phan so: ";
	obj3 = obj3.tru(obj1, obj2); obj3.xuat();	
	cout << "\nNhan 2 phan so: ";
	obj3 = obj3.nhan(obj1, obj2); obj3.xuat();
	cout << "\nChia 2 phan so: ";
	obj3 = obj3.chia(obj1, obj2); obj3.xuat();

	// copy va gan
	// obj3 = obj2;
	// obj3.xuat();
	// ps obj4 = ps(obj2);
	// obj4.xuat();
	
	// khoi tao co tham so
	// ps obj1(1,2), obj2(1,3), obj3;
	// obj3 = obj3.tru(obj1, obj2); obj3.xuat();
	return 0;
}
