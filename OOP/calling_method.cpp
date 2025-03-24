#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    void introduce()
    {
        cout << "hey how are you?" << endl;
    }
};
class student : public Person
{
public:
    void introduce()
    {
        cout << "hey student?" << endl;
    }
};

void whosthis(Person p)
{
    p.introduce();
}

int main()
{
    student anil;
    anil.introduce();
    whosthis(anil);

    return 0;
}