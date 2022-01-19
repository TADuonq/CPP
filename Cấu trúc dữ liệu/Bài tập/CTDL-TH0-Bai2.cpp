// Nguyen Manh Hien
// hiennm@tlu.edu.vn

#include <iostream>

using namespace std;

template <typename T>
int timTuanTu(T a[], int n, T x)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			return i;
	
	return -1;
}

int main()
{
	int a[] = {5, 8, 1, 6, 3, 10, 18};
	int n = 7;
	int x = 10;
	
	cout << "Vi tri cua x trong mang a la " << timTuanTu(a, n, x);
	
	return 0;
}
