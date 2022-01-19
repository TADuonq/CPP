#include <iostream>
using namespace std;

class SoPhuc
{
    private:
        int a;
        int b;
    public:
        SoPhuc() : a(0), b(0){};
        SoPhuc(int a, int b) : a(a), b(b){};
        SoPhuc operator+(const SoPhuc &s);
        SoPhuc operator-(const SoPhuc &s);
        friend SoPhuc operator*(const SoPhuc &s1, const SoPhuc &s2);
        friend SoPhuc operator/(const SoPhuc &s1, const SoPhuc &s2);
        friend istream &operator >> (istream &is, SoPhuc &s);
        friend ostream &operator << (ostream &os, SoPhuc &s);
        friend bool operator == (const SoPhuc &s1,const SoPhuc &s2);
};

istream &operator >> (istream &is, SoPhuc &s)
{
	cout << "Phan thuc: "; is >> s.a;
	cout << "Phan ao: "; is >> s.b;
}
ostream &operator << (ostream &os, SoPhuc &s)
{
	os << s.a << " + " << s.b << "i" << endl;
	return os;
}
SoPhuc SoPhuc::operator+(const SoPhuc&s)
{
	SoPhuc kq;
	kq.a = a + s.a;
	kq.b = b + s.b;
	return kq;
}

SoPhuc SoPhuc::operator-(const SoPhuc&s)
{
	SoPhuc kq;
	kq.a = a - s.a;
	kq.b = b - s.b;
	return kq;		
}

SoPhuc operator*(const SoPhuc &s1, const SoPhuc &s2)
{
	SoPhuc kq;
	kq.a=s1.a*s2.a - s1.b*s2.b;
	kq.b=s1.a*s2.b + s1.b*s2.a;
	return kq;
}

SoPhuc operator/(const SoPhuc&s1, const SoPhuc&s2)
{
	SoPhuc kq;
	kq.a=(s1.a*s2.a + s1.b*s2.b)/(s1.a*s2.a + s1.b*s2.b);
	kq.b=(s1.a*s2.b - s1.a*s2.b)/(s1.a*s2.a+s1.b*s2.b);
	return kq;
}
bool operator == (const SoPhuc&s1,const SoPhuc&s2)
{
	return ((s1.a == s2.a) && (s2.b == s2.b));
}
int main()
{
	SoPhuc s1, s2;
	cin >> s1 >> s2;
	cout << s1 << s2;
	SoPhuc kq = s1+s2;
	cout << kq;
	bool c = (s1==s2);
	cout << c;
	return 0;
}