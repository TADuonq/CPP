#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
base class: lớp cha
derived class: lớp con
function overriding: ghi đè
*/

class Person
{
    private:
        string name;
        string address;
    public:
        person(string name, string address)
        {
            this->name = name;
            this->address = address;
        }
        string getName() 
        { 
            return name; 
        }
        string getAddress() 
        {
            return address; 
        }
        void setName(string name) 
        { 
            this->name = name;
        }
        void setAddress(string address) 
        { 
            this->address = address;
        }
        void in()
        {
            cout << name << "\t" << address << "\t";
        }
};

class Student : public Person
{
    private:
        float gpa;
    public:
        Student(string name, string address, float gpa)
        {
            setName(name);
            setAddress(address);
            this->gpa = gpa;
        }
        float getGpa() 
        {
            return gpa; 
        }
        void setGpa(float gpa) 
        { 
            this->gpa = gpa;
        }
        //function overriding
        void in()
        {
            Person::in();
            cout << gpa << endl;
        }
};


int main()
{
    Student s("Truong Anh Duong", "Thai Binh", 3.4);
    s.in();
    return 0;
}