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
class student : private Person
{
public:
    void display()
    {
        cout << name << endl;
    }
    void setstudentname(string iname)
    {
        setname(iname);
    }
};
class gstudent : public student
{

public:
    void setGstudentname(string iname)
    {
        setstudentname(iname);
    }
};

int main()
{
    gstudent anil;
    anil.setGstudentname("anil");
    anil.display();

    return 0;
}