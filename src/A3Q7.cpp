#include <iostream>
#include <math.h>
using namespace std;

class Triangle
{
public:
    double a, b, c;

public:
    void getSides(void)
    {
        cout << "Enter the sizes of the triangle : " << endl;
        cin >> a >> b >> c;
    }
    double getPerimeter(void)
    {
        return (a + b + c);
    }
};

class Circle
{
public:
    double r;
};

class Area : public Triangle, public Circle
{
public:
    double a;
public:
    double perimeterArea(void)
    {
        r = getPerimeter() * (7 / 44.0);
        a = (22 / 7.0) * r * r;
        return a;
    }
};

int main()
{
    cout << "Dipaditya Das Roll 4" << endl;
    Area obj;
    obj.getSides();
    cout << "The area of the circle = " << obj.perimeterArea() << endl;
    return 0;
}
