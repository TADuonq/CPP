#include <iostream>
#include <cmath>
using namespace std;

template<class T>
class tam_giac
{
    private:
        T a, b, c;
    public:
        tam_giac(T _a, T _b, T _c);
        void output();
        bool check();
        float dientich();
        T chuvi();
};

template<class T>
tam_giac<T> :: tam_giac(T _a, T _b, T _c)
{
    a = _a;
    b = _b;
    c = _c;
}

template<class T>
bool tam_giac<T> :: check()
{
    if (a >= b + c || b >= a + c || c >= a + b)
        return false;
    return true;
}

template<class T>
void tam_giac<T> :: output()
{
    if(check())
    {
        cout << "\nDay la ba canh cua tam giac.";
        cout << "\nDo dai ba canh la: " << a << "\t" << b << "\t" << c;
    }
}

template <class T>
float tam_giac<T> :: dientich()
{
	float p = chuvi() / 2.0;
	if(check()) 
    {
		return (float)sqrt(p*(p-a)*(p-b)*(p-c));
	}
}

template<class T>
T tam_giac<T> :: chuvi()
{
	
	if(check()) 
    {
		return a + b + c;
	}
}

int main()
{
    tam_giac<int> tam_giac1(1, 2, 4);
    if (tam_giac1.check())
    {
        tam_giac1.output();
        cout << "\nDien tich cua tam giac = " << tam_giac1.dientich();
        cout << "\nChu vi cua tam giac = " << tam_giac1.chuvi();
    }
    else
    {
        cout << "3 canh khong phai la tam giac!";
    }
    cout << "\n\n";
    tam_giac<float> tam_giac2(3.5, 4.7, 5.5);
    if (tam_giac2.check())
    {
        tam_giac2.output();
        cout << "\nDien tich cua tam giac = " << tam_giac2.dientich();
        cout << "\nChu vi cua tam giac = " << tam_giac2.chuvi();
    }
    else
    {
        cout << "3 canh khong phai la tam giac!";
    }
    return 0;
}