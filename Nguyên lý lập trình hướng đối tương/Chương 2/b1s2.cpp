#include<iostream>
using namespace std;
int main()
{
	int n, m;
	do
	{
	     cout << "n: ";cin >> n;
	     if(n < 1 || n > 12)
	        cout << "khong thoa man !" << endl;
	} while(n <= 0 || n > 12);
	
	cout << "nhap nam m: ";cin >> m;
	switch(n)
	{
		case 1: if(n == 1)  cout << "thang 1 co 31 ngay "; break;
		case 2: if(n == 2)  
		{
			if(m % 4==0 || m % 400==0)
			cout << "thang 2 co 29 ngay ";
			else  cout << "thang 2 co 28 ngay ";
		}
		case 3: if(n==3)  cout<<"thang 3 co 31 ngay "; break;
		case 4: if(n==4)  cout<<"thang 4 co 30 ngay "; break;
		case 5: if(n==5)  cout<<"thang 5 co 31 ngay "; break;
		case 6: if(n==6)  cout<<"thang 6 co 30 ngay "; break;
		case 7: if(n==7)  cout<<"thang 7 co 31 ngay "; break;
		case 8: if(n==8)  cout<<"thang 8 co 31 ngay "; break;
		case 9: if(n==9)  cout<<"thang 9 co 30 ngay "; break;
		case 10: if(n==10)  cout<<"thang 10 co 31 ngay "; break;
		case 11: if(n==11)  cout<<"thang 11 co 30 ngay "; break;
		case 12: if(n==12)  cout<<"thang 12 co 31 ngay "; break;
	};
}
