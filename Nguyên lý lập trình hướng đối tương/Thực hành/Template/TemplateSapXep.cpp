#include<iostream>
using namespace std;


template<class T>
void selection_sort(T a[], int n)
{
	for(int i = 0; i<n-1; i++)
    {
		int vt = i;
		for(int j=i+1; j<n; j++)
        {
			if (a[vt] > a[j])
				vt = j;
		    if (vt != i)
            {
                T tmp = a[vt];
                a[vt] = a[i];
                a[i] = tmp;
		    }
	    }
    }
}

template<class T>
void insertsion_sort(T a[], int n)
{
	int j;
	for(int p=1; p<n; p++)
    {
		T tmp = a[p];
		for(j = p; j>0; j--)
        {
			if(tmp <a[j-1])
				a[j] = a[j-1];
			else
				break;
		}
		a[j] = tmp;
	}
}

template <class T>
void bubble_sort(T a[], int n) 
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n-1-i; j++)
            if (a[j] > a[j + 1])
            {
                T tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
		    }
}

template<class T>
void xuat(T a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() 
{
    int bb_i[5] = {10, 50, 30, 40, 20};
    int ni = 5 ;
    bubble_sort<int>(bb_i, ni);
    cout<<"Bubble_sort int: ";
    xuat<int>(bb_i,ni);
    
    double bb_d[5] = {3.5, 4.3, 3.8, 4.9, 2.8};
    int nd = 5 ;
    bubble_sort<double>(bb_d, nd);
    cout<<"Bubble_sort double: ";
    xuat<double>(bb_d,nd);
    cout<<endl;
    
    int in_i[5] = {10, 50, 30, 40, 20};
    int mi = 5 ;
    insertsion_sort<int>(in_i, mi);
    cout<<"Insertsion_sort int: ";
    xuat<int>(in_i,mi);

    double in_d[5] = {1.6, 5.7, 3.5, 4.3, 9.4};
    int md = 5 ;
    insertsion_sort<double>(in_d, md);
    cout<<"Insertsion_sort double: ";
    xuat<double>(in_d,md);
    cout<<endl;
    
    int sl_i[5] = {10, 50, 30, 40, 20};
    int qi = 5 ;
	selection_sort<int>(sl_i, qi);
	cout<<"Selection_sort int: ";
    xuat<int>(sl_i,qi);
          
    double sl_d[5] = {1.7, 5.4, 3.8, 4.2, 9.5};
    int qd = 5 ;
	selection_sort<double>(sl_d, qd);
	cout<<"Selection_sort double: ";
    xuat<double>(sl_d,qd);
    
  return 0;
}
	
