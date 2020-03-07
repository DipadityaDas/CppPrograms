#include <iostream>
#include <math.h>
using namespace std;

class Triangle
{
public:
	double a, b, c, s;
	int checkSides()
	{
		return (a + b > c && a + c > b && b + c > a);
	}
	double getSemiPerimeter()
	{
		s = (a + b + c) / 2.0;
		return s;
	}
};

class Area : public Triangle
{
public:
	double getArea()
	{
		return sqrt(s * (s - a) * (s - b) * (s - c));
	}
};

int main()
{
	cout << "Dipaditya Das Roll 4" << endl;

	Area obj;
	cout << "Enter the three sides of the triangle : " << endl;
	cin >> obj.a >> obj.b >> obj.c;

	if (obj.checkSides())
	{
		obj.getSemiPerimeter();
		double ar = obj.getArea();
		printf("The area of the triangle = %f\n", ar);
	}
	else
	{
		cout << "Not a triangle.\nInvalid Input." << endl;
	}
	return 0;
}
