#include <iostream>
using namespace std;

template<typename T>
T max(T a[], int size)
{
    int max = a[0];
    for(int  i = 1; i < size; i++)
        if(max < a[i])
            max = a[i];
    return max;
}

template<typename T>
T min(T a[], int size)
{
    int min = a[0];
    for(int  i = 1; i < size; i++)
        if(min > a[i])
            min = a[i];
    return min;
}

int main()
{
    int n;
    cout<< "Nhap so phan tu trong mang: "; 
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    cout << "Gia tri nho nhat " << min(a, n) << endl;
    cout << "Gia tri lon nhat " << max(a, n) << endl;

    int m;
    cout << "Nhap so phan tu trong mang: ";
    cin >> m;
    double b[m];
    for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
    cout << "Gia tri nho nhat " << min(b, m) << endl;
    cout << "Gia tri lon nhat " << max(b, m) << endl;
}