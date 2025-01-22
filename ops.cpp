#include <bits/stdc++.h>
using namespace std;
class Fruit
{
public:
    string name;
    string colour;
};

int main()
{
    Fruit apple;
    apple.name = "apple";
    apple.colour = "red";
    cout << apple.colour << " " << apple.name << endl;

    return 0;
}
