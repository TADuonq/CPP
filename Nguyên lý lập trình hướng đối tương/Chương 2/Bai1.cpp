#include<iostream>
#include<math.h>
using namespace std;

int souoc(int n)
{
	int dem = 1;
	for(int i = 2; i <= n; i++)
	{
		if(n % i == 0) 
			dem += 1;
	}
	return dem;
}

bool SNT(int n)
{
	if(n <= 1) 
		return false;
	for(int i = 2;i< = sqrt(n); i++)
	{
		if(n%i==0) 
			return false;
	}
	return true;
}

int demscs(int n)
{
	int dem = 0;
	while(n != 0)
	{
		if(SNT(n % 10) == true) 
			dem+=1;
		n /= 10;
	}
	return dem;
}

int main()
{
	int n;
	cout <<"Nhap N: "; cin >> n;
	cout << souoc(n) << endl;
	cout << n <<" co " << demscs(n) <<" chu so la SNT!";
}
