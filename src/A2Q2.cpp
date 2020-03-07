#include <iostream>
using namespace std;
void printUniqueElements(int a[], int s)
{
    for (int i = 0; i < s; ++i)
    {
        int j = 0;
        for (j = 0; j < i; ++j)
            if (a[i] == a[j])
                break;
        if (i == j)
            cout << a[i] << " ";
    }
}
int main()
{
    cout << "Dipaditya Das Roll 4";
    int size;
    cout << "\nEnter the size of the array : ";
    cin >> size;
    int arr[size];
    cout << "Enter the array elements :\n";
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    cout << "The Unique Elements are : \n";
    printUniqueElements(arr, size);
    return 0;
}
