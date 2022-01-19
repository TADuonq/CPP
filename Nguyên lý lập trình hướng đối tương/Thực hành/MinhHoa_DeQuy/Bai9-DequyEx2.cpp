// Chuong trinh minh hoa de quy

#include<iostream>
#include<cstring>
using namespace std;

void loop(int N)
{
	while (N>=10)
	{
		cout<<N%10;
		N /= 10;
	}
	cout<<N;
}

void reverse(int N)
{
	if (N<10) // Dieu kien dung
	{
		cout<<N;
	}
	else
	{
		cout<<N%10;
		reverse(N/10); // Loi goi de quy
	}
}

int main()
{    	 	
	//loop(5698); 
	//cout << "\n";
    reverse(5698);
    return 0;
}
