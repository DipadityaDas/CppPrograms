#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

class array
{
private:
	int x[20], n;

public:
	void read();
	void sort();
	void display();
	array friend merge(array, array);
};

void array::read()
{
	cout << "Enter the number of elements: ";
	cin >> n;
	cout << "Enter the numbers: ";
	for (int i = 0; i < n; i++)
		cin >> x[i];
}

void array::sort()
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (x[j] < x[i])
			{
				int temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
}

void array::display()
{
	for (int i = 0; i < n; i++)
		cout << x[i] << " ";
	cout << endl;
}

array merge(array a, array b)
{
	array c;
	int i, j, k;
	i = j = k = 0;
	while (i < a.n && j < b.n)
		if (a.x[i] < b.x[j])
			c.x[k++] = a.x[i++];
		else
			c.x[k++] = b.x[j++];
	while (i < a.n)
		c.x[k++] = a.x[i++];
	while (j < b.n)
		c.x[k++] = b.x[j++];
	c.n = a.n + b.n;
	return c;
}

int main()
{
	array x, y, z;
	x.read();
	y.read();
	x.sort();
	y.sort();
	z = merge(x, y);
	z.display();
	return 0;
}