#include<bits/stdc++.h>
using namespace std;
struct phancong 
{
	int tho,cv,cp;
};
struct data
{
	int cp, stt;
};
void nhap(data a[][100], int  &n)
{
	cin >> n; //dong i
    for (int i = 0; i < n; i++)
	{
    	for (int j = 0; j < n; j++) 
		{
    		cin >> a[i][j].cp;
        	a[i][j].stt = 0;
		}
	} 
}
void capnhatcongviec(data a[][100], int  &n,int j)
{
	for(int i = 0; i < n; i++)
		a[i][j].stt = 1;
}
void hoantracongviec(data a[][100], int  &n,int j)
{
	for(int i = 0; i < n; i++)
		a[i][j].stt=0;
}
int mindong(data a[][100], int  n,int i)
{
	int cpmin=214748364;
	for(int k = 0; k < n; k++)
		if(a[i][k].stt == 0 && a[i][k].cp < cpmin)
		{
			cpmin = a[i][k].cp;		
		}
	return  cpmin;
}
int canduoi(data a[][100], int  n,int tcp,int i)
{
	int cd = tcp;
	for(int k = i + 1; k < n; k++)
		cd = cd + mindong(a, n, k);
	return cd;
}
void taonutgoc(data a[][100], int n, int &tcp, int &cd, int &mintt)
{
	tcp = 0;
	mintt = 2147483645;
	cd = canduoi(a, n, tcp, -1);
}
int capnhatkyluc(float tcp,int &mintt,phancong x[], phancong pa[], int n)
{
	int i;
	if(mintt > tcp)
	{
		mintt = tcp;
		for( i = 0; i < n; i++)
		pa[i]=x[i];	
	}
}
void nhanhcan(data a[][100], int i, int &tcp, int &cd, int &mintt, phancong  x[], phancong pa[], int n)
{
	for(int j = 0; j < n; j++) //xet tat ca cong viec j
		if(a[i][j].stt == 0)
		{
			tcp = tcp + a[i][j].cp;
			cd = canduoi(a, n, tcp, i);
			phancong temp = x[i];
			if(cd < mintt)
			{
				x[i].tho = i + 1;
				x[i].cv = j + 1;
				x[i].cp = a[i][j].cp;
				capnhatcongviec(a, n, j);	
				if(i == n-1)
					capnhatkyluc(tcp, mintt, x, pa, n);
				else 
					nhanhcan(a,i+1,tcp,cd,mintt,x,pa,n);
			}
			// Quay lui
			x[i] = temp;
			tcp = tcp - a[i][j].cp;
			hoantracongviec(a, n, j);
		}
}
void in(phancong pa[], int n)
{
	int s = 0;
	for(int i = 0; i < n; i++) 
	{
		s = s + pa[i].cp;
	}
	cout << "\n" << s << endl;
	for(int i = 0; i < n; i++) 
	{
		cout << pa[i].tho << "\t" << pa[i].cv << "\t" << pa[i].cp << "\n";
	}
}

int main()
{
	data a[100][100];
	int n, tcp, cd, mintt;
	nhap(a, n);
	phancong pa[n], x[n];
	taonutgoc(a, n, tcp, cd, mintt);
	nhanhcan(a, 0, tcp, cd, mintt, x, pa, n);
	in(pa, n);
	return 0;
}

