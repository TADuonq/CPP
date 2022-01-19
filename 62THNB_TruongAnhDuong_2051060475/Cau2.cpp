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

template<typename T>
T average(T a[], int length)
{
    T ret = a[0];
    for(int i = 1; i < length; i++)
        ret += a[i];
    return ret / length;
}

int main()
{
    // Gia tri lon nhat, nho nhat
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


    // Gia tri trung binh
    int amount;
    cout << "Nhap so phan tu: ";
    cin >> amount;
    int int_data[amount];
    float float_data[amount];
    int i = 0;
    cout << "\n Nhap cac so kieu phan tu du lieu int: \n" << endl;
    for (int i = 0; i < amount; i++)
        cin >> int_data[i];
    cout << "\nGia tri trung binh: " << average(int_data, amount) << endl;
    int k;
    cout << "Nhap so luong so thuc: "; 
    cin >> k;
    cout << "\nNhap cac so kieu du lieu float: \n" << endl;
    for(i = 0; i < k; i++)
        cin >> float_data[i];
    cout << "\nGia tri trung binh: " << average(float_data, k) << endl;
    cin.get();
    return 0;
}