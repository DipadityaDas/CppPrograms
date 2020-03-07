#include <iostream>
using namespace std;
int main()
{
    cout << "Dipaditya Das Roll 4";
    int size,arr[10];
    cout << "\nEnter the size of the array : ";
    cin >> size;
    cout << "Enter the array elements : \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The array in reverse order : \n";
    for (int j = size - 1; j > -1 ; --j)
    {
        cout << arr[j] << " ";
    }
    return 0;
}
