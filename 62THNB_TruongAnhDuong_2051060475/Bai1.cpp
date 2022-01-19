#include<iostream> 
using namespace std;

class Person{
	protected:
		string hoten, quequan; 
		int ngaysinh;
	public:
		Person(){};
		~Person(){};
		
		void Nhap(){
			cout << "Ho va ten: ";cin.ignore(); getline(cin, hoten);
			cout << "Que quan: ";getline(cin,quequan); 
			cout << "Ngay sinh: "; cin >> ngaysinh;
		}
		
		void Xuat(){
			cout << "Ho va ten: " << hoten;
			cout << "\tQue quan: " << quequan;
			cout << "\tNgay sinh: " << ngaysinh;
		}
		
};

class Kysu:public Person
{
	private:
		int namtotnghiep;
		string nganhhoc;
	public:
		void NhapKS() 
        {
			Person::Nhap();
			//cin.ignore();
			cout << "Nam tot nghiep: "; cin >> namtotnghiep;
			//cout << "Tay nghe: ";getline(cin, taynghe); cin.ignore();
			cout << "Nganh hoc: "; cin >> nganhhoc;
		}
		void XuatKS() 
        {
			Person::Xuat(); 
			cout << "\tNganh hoc: " << nganhhoc;
			cout << "\tNam tot nghiep: " << namtotnghiep;
			cout << endl;
		}
}; 


int main()
{
	int n;
	Kysu ks[100]; 
	
	//Nhap ky su
	cout << "\nNhap so ky su: "; cin >> n;
	cout << "\nNHAP THONG TIN KY SU\n";
	for (int i=0; i<n; i++)
		ks[i].NhapKS();
	
	//Xuat ky su
	cout << "\nDANH SACH KY SU\n";
	for (int i=0; i<n; i++)
		ks[i].XuatKS();


}
