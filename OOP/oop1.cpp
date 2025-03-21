// friend function
#include <bits/stdc++.h>
using namespace std;

class Human
{
    string name;
    int age;

public:
    Human(string iname, int iage)
    {
        name = iname;
        age = iage;
    }
    void tellme()
    {
        cout << name << endl
             << age << endl;
    }

    friend void display(Human man);
};

void display(Human man)
{
    cout << man.name << endl
         << man.age << endl;
}

int main()
{
    Human anil("anil", 24);
    display(anil);

    return 0;
}