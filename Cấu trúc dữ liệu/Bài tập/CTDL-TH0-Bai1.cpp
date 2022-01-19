#include <iostream>

using namespace std;

int fibo(int n)
{
	if (n <= 1)
		return 1;
	else
		return fibo(n - 1) + fibo(n - 2);
}

int main()
{
	int n;
	cout << "Nhap mot so tu nhien: ";
	cin >> n;
	
	cout << "F" << n << " = " << fibo(n);
	
	return 0;
}
