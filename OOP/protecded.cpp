#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
    string name;

public:
    void setname(string iname)
    {
        name = iname;
    }
};
class student : public Person
{
    public:
    void display()
    {
        cout << name << endl;
    }
};

int main()
{
    student anil;
    anil.setname("anil");
    anil.display();

    return 0;
}