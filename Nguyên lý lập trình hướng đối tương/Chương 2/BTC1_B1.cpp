/* Ma trận vuông chứa các số nguyên:Nhập vào; In ma trận.
   Đếm số phần tử là số chẵn hay số lẻ
   Ktra xem ma trân có đối xứng qua đường chéo chính không?
*/
#include<iostream>
using namespace std;

void nhap(int &n, int a[100][100])
{
	cout<<"Nhap kich thuoc ma tran vuong n = ";
	cin >> n;
	for (int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
		{
			cout << "a["<<i<<"]["<<j<<"] = "; 
			cin >> a[i][j];
		}
			
}

void xuat(int &n, int a[100][100])
{
	cout << "\nMa tran vua nhap la:\n";
	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
    }
}

void dem(int n, int a[100][100])
{
	int chan = 0; 
	int le = 0;
	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0) 
				chan++;
			else le++;
		}	
    }
	cout << "So phtu chan: " << chan;
	cout << "\nSo phtu le: " << le;
}
bool dx(int n, int a[100][100])
{
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if (a[i][j] != a[j][i]) 
				return 0;
		}	
    }
	return 1;
}

int main()
{
	int n, a[100][100];
	nhap(n,a);
	xuat(n,a);
	dem(n,a);
	if(dx(n,a)) 
		cout << "\nMT co doi xung!";
	else 
		cout << "\nMT ko doi xung!";
}
