// Nguyen Manh Hien
// hiennm@tlu.edu.vn

#include <iostream>

using namespace std;

template <typename T>
int timNhiPhan(T a[], int n, T x)
{
	int left = 0;
	int right = n - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (x < a[mid])
			right = mid - 1;
		else if (x > a[mid])
			left = mid + 1;
		else
			return mid;
	}
	
	return -1;
}

int main()
{
	int a[] = {1, 3, 5, 6, 9, 10, 15};
	int n = 7;
	int x = 9;
	
	cout << "Vi tri cua x trong mang a la " << timNhiPhan(a, n, x);
	
	return 0;
}
