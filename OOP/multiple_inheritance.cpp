#include <bits/stdc++.h>
using namespace std;

class Father
{

public:
    int height;
    void askfather()
    {
        cout << "am your father what you want" << endl;
    }
};
class mother
{

public:
    string skin;
    void askmother()
    {
        cout << "am your mother what you want" << endl;
    }
};

class child : public Father, public mother
{
public:
    void askparents()
    {
        cout << "am asking my parents" << endl;
    }
    void setcolourheight(string color, int iheight)
    {
        skin = color;
        height = iheight;
    }
    void display()
    {
        cout << height << " " << skin << endl;
    }
};
int main()
{
    child ch;
    ch.setcolourheight("red", 23);
    ch.display();
    ch.askfather();
    ch.askmother();
    ch.askparents();

    return 0;
}