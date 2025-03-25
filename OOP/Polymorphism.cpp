#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    virtual void introduce()
    {
        cout << "hey person" << endl;
    }
};
class student : public Person
{
public:
    void introduce()
    {
        cout << "hey student" << endl;
    }
};
class farmer : public Person
{
public:
    void introduce()
    {
        cout << "hey farmer" << endl;
    }
};

int main()
{
    Person *p1 = new student();
    Person *p2 = new farmer();

    p1->introduce();
    p2->introduce();
    delete p1;
    delete p2;

    return 0;
}