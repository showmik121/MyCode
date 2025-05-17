#include <bits/stdc++.h>
using namespace std;

class human
{
    string religion, color;

protected:
    string name;
    int age, weight;

public:
    human(string religion, string color, string name, int age, int weight)
    {
        this->religion = religion;
        this->color = color;
        this->name = name;
        this->age = age;
        this->weight = weight;
    }

    string getreligion() const
    {
        return religion;
    }
    string getcolor() const
    {
        return color;
    }
};
class student : protected human
{
private:
    int roll, fees;

public:
    student(string religion, string color, string name, int age, int weight, int roll, int fees) : human(religion, color, name, age, weight)
    {
        this->roll = roll;
        this->fees = fees;
    }
    void show()
    {
        cout << getreligion() << endl;
        cout << name << endl;
    }
};

int main()
{
    student s("islam", "black", "showmik", 20, 60, 39, 400);
    s.show();
    return 0;
}