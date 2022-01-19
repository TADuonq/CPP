#include <bits/stdc++.h>
#include <iostream>

using namespace std;

const char ginp[]="DT3.txt";
int a[101][101]; 
int n, cx[101], Q[101], truoc[101], solt = 0;

void init()
{
	freopen(ginp, "r", stdin);
    //Doc du lieu vao
    cin >> n; 
    for (int i = 1; i <= n; i++)
   		for (int j = 1; j <= n; j++) 
		   cin >> a[i][j];
   	//in ma tran ke
   	cout <<"So dinh: " <<n<< "\n";
   	cout <<"Ma tran ke cua do thi:" << "\n";
   	for(int i=1; i<=n; i++)
   	{ 
		for (int j=1; j<=n; j++) 
			cout << a[i][j] << " ";
   		   	cout << "\n";
    }
}

void DFS(int u)
{
    //cout << u <<" ";//in ra dinh u
    cx[u] = solt;//danh dau dinh da tham
    for (int v = 1; v <= n; v++)
        if (a[u][v] == 1 && cx[v]==0) 
		{
            truoc[v] = u;
            DFS(v);
        }	
}

void BFS(int u)
{
	int v, dau = 1, cuoi = 1;
	Q[cuoi] = u; cx[u] = 1;
	while (dau <= cuoi)
	{
		v=Q[dau]; 
		dau++;
		//cout << v <<" ";
		for (int j = 1; j <= n; j++)
		    if (a[v][j] == 1 && cx[j] == 0)
		        {
				   cuoi++; 
				   Q[cuoi] = j; 
				   cx[j] = solt; 
                   truoc[j] = v;
				}
	}
}

void Duyet()
{
    int s = 1;          //Duyet bat dau tu S
    // Khoi tao cac dinh deu chua tham
    for(int i = 1; i <= n; i++)
        cx[i] = 0;
    cout << "Duyet theo chieu sau bat dau tu dinh: " << s << "\n";
	solt = 1;
	DFS(s);
	cout << "\n";

	//Khoi tao cac dinh deu chua tham
	for(int i = 1; i <= n; i++)
		cx[i] = 0;
	cout << "Duyet theo chieu rong bat dau tu dinh "<<s<<": \n";
	solt = 1;
	BFS(s);
	cout << "\n";	
}

void Duongdi()
{
	int s = 1, t = 8;
	for(int v = 1; v <= n; v++)
	{
		truoc[v] = 0;
		cx[v] = 0;
	}
	solt = 1;
	DFS(s);
	BFS(s);
	if(cx[t] == 0)
		cout << "Khong co duong di tu" << s << "den" << t << endl;
	else
	{
		cout << "Duong di tu" << s << "den" << t << ":" << endl;
		cout << t;
		int p = t;
		while(truoc[p] != 0)
		{
			p = truoc[p];
			cout << "<--" << p;
		}
	}
	cout << endl;
}

void lienthong()
{
	for(int v = 1; v <= n; v++)
		cx[v] = 0;
	solt = 0;
	for(int v = 1; v <= n; v++)
		if(cx[v] == 0)
		{
			solt++;
			DFS(v);
			BFS(v);
		}
	if(solt == 1)
		cout << "Do thi lien thong" << endl;
	else
	{
		cout << "Do thi co" << solt << "thanh phan lien thong" << endl;
		for(int i = 1; i <= solt; i++)
		{
			cout << "Thanh phan lien thong" << i << "gom cac dinh:" << endl;
			for(int v = 1; v <= n; v++)
				if(cx[v] == i)
					cout << v <<" ";
			cout << endl; 
		}
	}
}

int main()
{
    init();
    
    Duyet();
	Duongdi();
	lienthong();

    return 0;
}