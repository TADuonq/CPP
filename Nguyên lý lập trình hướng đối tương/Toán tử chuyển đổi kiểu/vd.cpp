#include<iostream>
#include<conio.h>

using namespace std;

template<class T>
class point
{
    T x, y;
    public:
    point(T abs = 0, T ord = 0) 
    {
        x = abs;
        y = ord;
    }
    void display();
}

template<class T>
void point<T>::display()
{
    cout << "Toa do: " << x << " " << y << "\n";
}
void point<char>::display()
{
    cout << "Toa do: " << (int)x << " " << (int)y << "\n";
}
void main()
{
    clrscr();
    point<int>ai(3,5);
    ai.display();
    point<char>ac('d', 'y');
    ac.display();
    point<double>ad(3.5, 2.3);
    ad.display();
    getch();
}