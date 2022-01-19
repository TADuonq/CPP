#include <iostream>
using namespace std;

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
    int n;
    cout << "Nhap so luong so thuc: "; 
    cin >> n;
    cout << "\nNhap cac so kieu du lieu float: \n" << endl;
    for(i = 0; i < n; i++)
        cin >> float_data[i];
    cout << "\nGia tri trung binh: " << average(float_data, n) << endl;
    cin.get();
    return 0;
}

