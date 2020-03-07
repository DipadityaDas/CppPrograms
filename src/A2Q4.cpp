#include <iostream>
using namespace std;
void countDuplicateElements(int a[], int s)
{   
    int c=0;
    for (int i = 0; i < s; ++i)
    {
        int j = 0;
        for (j = 0; j < i; ++j)
            if (a[i] == a[j])
                c++;
    }
    cout << c;
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
    cout << "Total duplicate elements are : ";
    countDuplicateElements(arr, size);
    return 0;
}
