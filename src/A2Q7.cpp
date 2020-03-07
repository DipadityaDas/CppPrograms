#include <iostream>
#include <algorithm>
using namespace std;
void LinearSearch(int a[], int count, int s)
{
	int flag = 0;
	for (int i = 0; i < count; i++)
	{
		if (a[i] == s)
		{
			cout << "Element found";
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		cout << "Element not found!! ";
}

void BinarySearch(int a[], int count, int s)
{
	sort(a, a + count);
	int l = 0, u = count - 1, mid, flag = 0;
	while (l <= u)
	{
		mid = (l + u) / 2;
		if (a[mid] == s)
		{
			cout << "Element found";
			flag = 1;
			break;
		}
		else if (a[mid] > s)
			u = mid - 1;
		else
			l = mid + 1;
	}
	if (flag == 0)
		cout << "Element not found";
}

int main()
{
	cout << "Dipaditya Das Roll 4";

	int ch, size, search;

	cout << "\nEnter the size of array : ";
	cin >> size;

	int arr[size];

	cout << "Enter the array elements : " << endl;
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	cout << "Enter the element to be search : ";
	cin >> search;

	cout << endl
		 << "1. Linear Search" << endl
		 << "2. Binary Search" << endl
		 << "Enter your choice : ";
	cin >> ch;

	switch (ch)
	{
	case 1:
		LinearSearch(arr, size, search);
		break;
	case 2:
		BinarySearch(arr, size, search);
		break;
	default:
		cout << "Invalid Choice";
		break;
	}
	return 0;
}
