#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int age;
    bool gender;
    void printinfo()
    {
        cout << "name= ";
        cout << name << endl;
        cout << "age= ";
        cout << age << endl;
        cout << "gender= ";
        cout << gender << endl;
    }
};
int main()
{

    student a[3];
    for (int i = 0; i < 3; i++)

    {
        cout << "name= ";
        cin >> a[i].name;
        cout << "age= ";
        cin >> a[i].age;
        cout << "gender= ";
        cin >> a[i].gender;
    }
    for (int i = 0; i < 3; i++)
    {
        a[i].printinfo();
    }

    return 0;
}