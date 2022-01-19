#include <iostream>
#include <vector>
using namespace std;

class Matrix
{
	int m, n;
	double elements[100][100];
public:
	Matrix() {}
	Matrix(const Matrix& a) 
	{
		this->m = a.m;
		this->n = a.n;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				this->elements[i][j] = a.elements[i][j];
	}
	Matrix(int m, int n)
	{
		this->m = m;
		this->n = n;
	}

	~Matrix() {}

	void nhap() 
	{
		cout << "Nhap so hang: "; cin >> m;
		cout << "Nhap so cot: "; cin >> n;
		cout << "Nhap ma tran:\n";
		for (int i = 0; i < m; i++) 
		{
			for (int j = 0; j < n; j++) 
			{
				cout << "a[" << i << "][" << j << "] = "; cin >> elements[i][j];
			}
		}
	}

	void xuat()
	{
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++)
				cout << elements[i][j] << " ";
			cout << "\n";
		}
	}

	int cong(const Matrix& a)
	{
		if (this->m == a.m && this->n == a.n)
		{
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					this->elements[i][j] += a.elements[i][j];
				}
			}
			return 1;
		}
		return 0;
	}

	void nhan(int k) 
	{
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				elements[i][j] *= k;
	}

	int nhan(const Matrix &a)
	{
		if (n == a.m)
		{
			Matrix result(m, a.n);
			for(int i=0; i<m; i++)
			{
				for(int j=0; j<a.n; j++)
				{
					for(int k=0; k<n; k++)
					{
						result.elements[i][j] += (elements[i][k]*a.elements[k][j]);
					}
				}
			}
			this->n = a.n;
			for(int i=0; i<m; i++)
			{
				for(int j=0; j<n; j++)
				{
					this->elements[i][j] = result.elements[i][j];
				}
			}
			return 1;
		}
		return 0;
	}
	friend vector<double> multiply(const Matrix &a, const vector<double> &b);
};

vector<double> multiply(const Matrix &a, const vector<double> &b)
{
	vector<double> result;
	if (a.n == b.size())
	{	
		for(int i=0; i<a.m; i++)
		{
			double sum = 0;
			for(int j=0; j<a.n; j++)
			{
				sum += a.elements[i][j] * b[j];
			}
			result.push_back(sum);
		}
	}
	return result;
}
int main() 
{
	Matrix a, b;
	a.nhap();
//	b.nhap();
	cout << "\nMa tran thu 1: " << endl;
	a.xuat();
//	cout << "\nMa tran thu 2: " << endl;
//	b.xuat();
//	
//	/*--------------------------------------------------------------*/
//	
//	cout << "\nTong cua ma tran thu 1 va ma tran thu 2: " << endl;
//	if (a.cong(b))
//	{
//		a.xuat();
//	}
//	else
//	{
//		cout <<"\nKhong cong duoc hai ma tran!" << endl;
//	}
//	
//	/*--------------------------------------------------------------*/
//
//	cout << "\nNhan ma tran thu nhat voi 3: " << endl;
//	a.nhan(3);
//	a.xuat();
//
//	/*--------------------------------------------------------------*/
//		
//	cout << "\nNhan tiep ma tran voi b: " << endl;
//	if (a.nhan(b))
//	{
//		a.xuat();
//	}
//	else
//	{
//		cout << "Khong nhan duoc!" << endl;
//	}
	vector<double> v = {1,2,3};
	vector<double> c = multiply(a,v);
	cout << "\nNhan voi vector (1,2,3): \n";
	if (!c.empty())
	{
		for (double i:c)
			cout << i << "\n";
	}
	else
		cout << "\nKhong nhan duoc!";
	return 0;
}
