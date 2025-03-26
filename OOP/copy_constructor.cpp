#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;
    int age;
    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    person(const person &p)
    {
        cout << "copy constructor called" << endl;
        name = p.name;
        age = p.age;
    }
    void introduction()
    {
        cout << "hi i am " << name << " and i am " << age << " old" << endl;
    }
};

int main()
{
    person per("anil", 25);
    person per2 = per;
    per.introduction();
    per2.introduction();

    return 0;
}