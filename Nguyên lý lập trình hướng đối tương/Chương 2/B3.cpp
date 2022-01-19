/*	Nhập vào 3 số nguyên, ktra 3 sốn nguyên đó có là độ dài 3 canh cảu tam giác.
	Nếu có, tính diện tích và chu vi
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;
	cout <<"a = "; cin >> a;
	cout <<"b = "; cin >> b;
	cout <<"c = "; cin >> c;
	if(a+b>c && b+c>a && c+a>b)
	{
		cout <<"a, b, c la do dai 3 canh cua 1 tam giac\n";
		cout <<"Chu vi cua tam giac la: " << a+b+c << endl;
		double p = (a+b+c)/2.0;
		cout <<"Dien tich cua tam giac la: " << sqrt(p*(p-a)*(p-b)*(p-c));
	}
	else cout <<"a, b, c khong la do dai cua 1 tam giac\n";
}
