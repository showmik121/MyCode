#include <bits/stdc++.h>
using namespace std;

class father
{
protected:
    int height;

public:
    father(int h)
    {
        cout << "constructor of father is called" << endl;
        height = h;
    }
};
class mother
{

protected:
    string skin;

public:
    mother(string colour)
    {
        cout << "mother class constructor" << endl;
        skin = colour;
    }
};

class child : public father, public mother
{
public:
    child(int x, string y) : father(x), mother(y)
    {
        cout << "child class constructor" << endl;
    }
    void display()
    {
        cout << height << endl;
        cout << skin << endl;
    }
};

int main()
{

    child ch(5, "black");
    ch.display();
    return 0;
}
