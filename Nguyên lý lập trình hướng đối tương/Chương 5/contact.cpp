#include<iostream>
using namespace std;
class ContactDir 
{
protected:
    int a;
public:
    ContactDir(int a) 
    {
        this -> a = a;
    }
    virtual int Lookup(const char *name) 
    {
        cout << "base";
    }
};
class SortedDir : public ContactDir
{
protected:
    int a;
public:
    SortedDir(int a) : ContactDir(a){}
    int Lookup(const char *name)
    {
        cout << "derived";
    }
};

int main()
{
    ContactDir c1(10);
    SortedDir *p1, p1 = &c1;
    cout << p1 -> Lookup("A");

    // SortedDir c2(20);
    // SortedDir *p2, p2 = &c2;
    // cout << p2 -> Lookup("ABC");
}