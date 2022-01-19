#include<iostream>
using namespace std;

template<typename T>
T dslk(T a[], int n) 
{
    int dslk = a[0];
    
}

int main()
{
    dslk<int> ds1;
	
	ds1.pushFront(4);
	ds1.pushFront(7);
	ds1.pushFront(2);
	ds1.pushFront(6);
	ds1.pushFront(9);
	
	cout << "Danh sach phan tu: ";
	ds1.print();                                       // in ra: 9 6 2 7 4
	cout << "Kich thuoc danh sach: " << ds1.getSize(); // in ra: 5
	cout << endl;
	
	if (ds1.contains(7))
		cout << "Tim duoc 7 trong danh sach" << endl;
	if (!ds1.contains(10))
		cout << "Khong tim duoc 10 trong danh sach" << endl;
	
	ds1.popFront(); // xoa 9
	cout << "Danh sach sau khi xoa phan tu dau tien: ";
	ds1.print();    // in ra: 6 2 7 4
	
	ds1.remove(2);
	cout << "Danh sach sau khi xoa 2: ";
	ds1.print();	   // in ra: 6 7 4
	
	return 0;
}