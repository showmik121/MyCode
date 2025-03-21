#include <bits/stdc++.h>
using namespace std;
class Person
{

public:
    string name;
    int age;
    Person(string iname, int iage)
    {
        name = iname;
        age = iage;
    }
};

class student : public Person
{
public:
    int id;
    student(string iname, int iage) : Person(iname, iage)
    {
    }

    void setid(int iid)
    {
        id = iid;
    }
    void introduse()
    {
        cout << "hi i am " << name << " and i am " << age << " years old" << endl
             << " my id is " << id << endl;
    }
};

int main()
{

    student anil("anil", 25);
    anil.setid(2333);
    anil.introduse();
    return 0;
}