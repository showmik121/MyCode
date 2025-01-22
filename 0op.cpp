#include <bits/stdc++.h>
using namespace std;

class rectangle
{
public:
    int l;
    int b;

    // Default constructor
    rectangle() : l(0), b(0) {}

    // Parameterized constructor
    rectangle(int l, int b) : l(l), b(b) {}

    // Copy constructor
    rectangle(const rectangle &r)
    {
        l = r.l;
        b = r.b;
    }
};

int main()
{
    // Default constructor
    rectangle r1;
    cout << r1.l << " " << r1.b << endl; // Output: 0 0

    // Parameterized constructor
    rectangle r2(3, 4);
    cout << r2.l << " " << r2.b << endl; // Output: 3 4

    // Copy constructor
    rectangle r3 = r2;
    cout << r3.l << " " << r3.b << endl; // Output: 3 4

    return 0;
}
