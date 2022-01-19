/*minh hoa khai bao va su dung lop co so truu tuong: 
	lop Engine la lop co so truu tuong cua cac lop Car va lop PublicTransport. 
	Hai lop nay, sau do, lai lam lop co so cua lop Bus.
*/

#include<bits/stdc++.h>
using namespace std;

/* lop Engine */
class Engine
{
	int power; // Cong suat
	public:
		Engine(){power = 0;}; // Tao khong tham so
		Engine(int pIn){power = pIn;};// Tao co tham so
		void show(); // Gioi thieu
		float getPower()
		{
			return power;
		}
};

void Engine::show()
{
	cout<< "This is an engine having a power of "<< power <<"KWH" <<endl;
	return;
}
/* lop Car dan xuat tu lop co so truu tuong Engine*/
class Car: public virtual Engine
{
	int speed; // Toc do
	string mark; // Nhan hieu
	float price; // Gia xe
	public:
		Car(); // Tao khong tham so
		Car(int, int, string, float); // Tao co tham so
		void show(); // Gioi thieu
		float getSpeed()
		{
			return speed;
		}
		string getMark()
		{
			return mark;
		}
		float getPrice()
		{
			return price;
		}
};

Car::Car(): Engine()
{ // Tao khong tham so
	speed = 0;
	mark="";
	price = 0;
}
// Tao co tham so
Car::Car(int pwIn, int sIn, string mIn, float prIn): Engine(pwIn)
{
	speed = sIn;
	mark= mIn;
	price = prIn;
}
// Gioi thieu
void Car::show()
{
	cout << "This is a "<< mark << " having a speed of "<< speed << " km/h, its power is " << getPower()
	<<"KWh and price is $" << price << endl;
	return;
}
/* lop PublicTransport dan xuat truu tuong tu lop Engine */
class PublicTransport: public virtual Engine
{
	float ticket; // Gia ve phuong tien
	public:
		PublicTransport(); // Tao khong tham so
		PublicTransport(int, float); // Tao co tham so
		void show(); // Gioi thieu
		float getTicket()
		{
			return ticket;
		}
};
// Tao khong tham so
PublicTransport::PublicTransport(): Engine()
{
	ticket = 0;
}
// Tao co tham so
PublicTransport::PublicTransport(int pwIn, float tIn): Engine(pwIn)
{
	ticket = tIn;
}
// Gioi thieu
void PublicTransport::show()
{
	cout << "This is a public transport haven a ticket of $"<< ticket << " and its power is " << getPower() << " KWh" << endl;
	return;
}
/* lop Bus ke thua tu lop Car va PublicTransport */
class Bus: public Car, public PublicTransport
{ // Thu tu khai bao
	int label; // So hieu tuyen xe
	public:
	Bus(); // Tao khong tham so
	Bus(int,int,string,float,float,int);// Tao co tham so
	void show(); // Gioi thieu
};
// Tao khong tham so
Bus::Bus(): Engine(), Car(), PublicTransport()
{ // Theo thu tu dan xuat
	label = 0;
}
// Tao co tham so
Bus::Bus(int pwIn, int sIn, string mIn, float prIn, float tIn, int lIn): Engine(pwIn), Car(pwIn, sIn, mIn, prIn), PublicTransport(pwIn, tIn)
{
	label = lIn;
}
// Gioi thieu
void Bus::show()
{
	cout << "This is a bus on the line " << label<< ", its speed is " << getSpeed()
	<< " km/h, power is " << Car::getPower()<< " KWh, mark is " << getMark()
	<< ", price is $ " << getPrice() << " and ticket is " << getTicket() << endl;
	return;
}
// ham main
int main()
{
	Bus myBus(250, 100, "Mercedes", 3000, 1.5, 27);
	myBus.Car::Engine::show(); // Ham cua lop Engine
	myBus.PublicTransport::Engine::show();// Ham cua lop Engine
	myBus.Car::show(); // Ham cua lop Car
	myBus.PublicTransport:: show(); // Ham cua lop PublicTransport
	myBus.show(); // Ham cua lop Bus
	return 0;
}
