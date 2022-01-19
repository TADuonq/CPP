/*
 * Chuong trinh minh hoa tuong thich kieu
 * voi cac lop Pet va Dog
 * Author: 
 */
 
#include<iostream>
#include<string>

using namespace std;

class Pet
{
	public:
		string name;
		virtual void print();
};

class Dog : public Pet
{
	public:
		string breed; // Thuoc tinh rieng cua lop Dog
		virtual void print();
};

int main()
{
	// ----------- Vi du 1 -----------
//	Pet aPet;
//	Dog aDog;
//	
//	aDog.name = "Cun"; // Ke thua tu lop cha Pet
//	aDog.breed = "Great Dane";	
//	aDog.print();
//	
//	aPet = aDog;
//	aPet.print();

	// ----------- Vi du 2 -----------
//	Pet pet1;
//	Dog dog1;
//	
//	pet1.name = "Tiny";
//	dog1 = pet1; // Khong the thuc hien phep gan

	// ----------- Vi du 3 -----------
	Pet* pPet;
	Dog* pDog;
	
	pDog = new Dog();
	pDog->name = "Cun";
	pDog->breed = "Great Dane";
	pDog->print();
	
	pPet = pDog;	
	pPet->print();

	return 0;
}

void Pet::print()
{
	cout << "Ham print() cua lop cha Pet - Name: " << name << endl;
}

void Dog::print()
{
	cout << "Ham print() cua lop ke thua Dog - Name: " << name << " - Breed: " << breed << endl;
}
