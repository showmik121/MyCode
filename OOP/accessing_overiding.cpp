#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    void introduction()
    {
        cout << "hi i am a person" << endl;
    }
};

class student : public person
{
public:
    void introduction()
    {
        cout << "hi am student" << endl;
        person::introduction();
    }
};

int main()
{
    student anil;
    anil.introduction();
    // anil.person::introduction();
    return 0;
}