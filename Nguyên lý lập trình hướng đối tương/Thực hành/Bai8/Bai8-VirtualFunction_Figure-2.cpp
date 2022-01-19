/*
 * Chuong trinh minh hoa ham ao
 * voi cac lop Figure
 */
 
#include<iostream>
#include<string>

using namespace std;

class Figure
{
	private:
		string name;
	public:
		virtual void draw();
		void center();
};

class Rectangle: public Figure
{
	private:
		string name;
		int width;
		int height;
	public:
		void draw(); // cai dat lai ham draw	
};

int main()
{
	Figure f;
	f.draw();
	f.center();
	
	cout << "-------------------------------\n";
	Rectangle r;
	r.draw();
	r.center();
	return 0;
}

void Rectangle::draw()
{
	cout << "Day la ham draw() cua lop con Rectangle" << endl;
}

void Figure::draw()
{
	cout << "Day la ham draw() cua lop cha Figure" << endl;
}

void Figure::center()
{
	cout << "Goi ham center() -> ";
	draw(); // goi lai ham draw
}
