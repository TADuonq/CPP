/*
 * Chuong trinh minh hoa Dequy 	
 */
 
#include<iostream>
#include<stdlib.h>

using namespace std;

int func1(int n)
{
	if (n < 1 )
	{
		return 0;
	}
	else
	{
		return (n + func1(n-1));
	}
}

int main()
{				
	cout<< func1(2) << "\n";
	system("pause");
	return 0;
}


