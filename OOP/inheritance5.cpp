#include <bits/stdc++.h>
using namespace std;

class Person
{

public:
    Person()
    {
        cout << "constructor of the Person class called" << endl;
    }
    ~Person()
    {
        cout << "destructor of the person class is called" << endl;
    }
};

class student : public Person
{
public:
    student()
    {
        cout << "constructor of student class is called" << endl;
    }
    ~student()
    {
        cout << "distuctor of student class is called" << endl;
    }
};

int main()
{
    student anil;

    return 0;
}