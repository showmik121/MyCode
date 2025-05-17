#include <bits/stdc++.h>
using namespace std;

class human
{
public:
    string name;
    human(string name)
    {
        this->name = name;
    }
    void display()
    {
        cout << "my name is " << name << endl;
    }
};

class engineer : public virtual human
{
    void money()
    {
        cout << "hello money" << endl;
    }

public:
    string specilaization;

    engineer(string name, string specilaization) : human(name)
    {
        this->specilaization = specilaization;
    }

    void work()
    {
        cout << "i have specilization in " << specilaization << endl;
    }
};

class youtuber : public virtual human
{
public:
    int subscribe;
    youtuber(string name, int subscribe) : human(name)
    {
        this->subscribe = subscribe;
    }
    void influncer()
    {
        cout << "i have " << subscribe << endl;
    }
};

class codeteacher : public engineer, public youtuber
{
public:
    int salary;
    codeteacher(string name, string specilaization, int subscribe, int salary) : human(name), engineer(name, specilaization), youtuber(name, subscribe)
    {
        this->salary = salary;
    }
};

int main()
{
    codeteacher c("boda", "nothing", 3000, 50000);
    c.display();
    c.work();
    c.influncer(); 
    return 0;
}