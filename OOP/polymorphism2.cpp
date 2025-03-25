#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    double dim1, dim2;

public:
    Shape(double dim1, double dim2)
    {
        this->dim1 = dim1;
        this->dim2 = dim2;
    }
    virtual double area()
    {
        return 0;
    }
};
class triangle : public Shape
{
public:
    triangle(double dim1, double dim2) : Shape(dim1, dim2)
    {
    }
    double area()
    {
        return 0.5 * dim1 * dim2;
    }
};
class rectangle : public Shape
{
public:
    rectangle(double dim1, double dim2) : Shape(dim1, dim2)
    {
    }
    double area()
    {
        return dim1 * dim2;
    }
};

int main()
{
    Shape *p1 = new triangle(10, 2);
    Shape *p2 = new rectangle(30, 3);
    cout << p1->area() << endl;
    cout << p2->area() << endl;
    delete p1;
    delete p2;

    return 0;
}