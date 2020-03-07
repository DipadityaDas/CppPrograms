#include <iostream>
using namespace std;

int getMaxElement(int a[], int size)
{
    static int i = 0, max = -9999;
    if (i < size)
    {
        if (max < a[i])
            max = a[i];

        ++i;
        getMaxElement(a, size);
    }
    return max;
}
int main()
{
    cout << "Dipaditya Das Roll 4";

    int size;
    cout << endl
         << "Enter the size of the array : ";
    cin >> size;

    int arr[20];
    cout << "Enter the array elements :" << endl;
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    cout << "The maximium number in the array = " << getMaxElement(arr, size);
    return 0;
}
