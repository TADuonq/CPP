#include <iostream>       // std::cout
#include <stack>          // std::stack
using namespace std;

int main ()
{
	stack<char> cStack;
	char next, stop;
	do
	{		
		cout << "\nNhap vao mot chuoi ky tu: ";
		cin.get(next);
		while (next != '\n')
		{
			cStack.push(next);
			cin.get(next);
		}
		cout << "Chuoi nghich dao la: ";
		while (!cStack.empty())
		{
			cout << cStack.top();
			cStack.pop();
		}		
		
		cout << "\n\n--> Ban co muon tiep tuc khong (y/n)? ";
		cin >> stop;	
		cin.ignore();	
	} while (stop != 'n');
	
	return 0;
}
