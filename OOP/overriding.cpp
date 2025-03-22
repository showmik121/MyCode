#include <bits/stdc++.h>
using namespace std;

class Person
{

public:
    void introduce()
    {
        cout << "hi i am a person" << endl;
    }
};
class student : public Person
{
public:
    void introduce()
    {
        cout << "hi i am a student" << endl;
    }
};

int main()
{

    student anil;
    anil.introduce();
    return 0;
}