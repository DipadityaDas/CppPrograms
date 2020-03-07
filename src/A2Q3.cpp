#include <iostream>
using namespace std;
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main(int argc, char const *argv[])
{
    cout << "Dipaditya Das Roll 4";
    int size, arr[10];
    cout << "\nEnter the size of the array : ";
    cin >> size;
    cout << "Enter the array elements : \n";
    for(int i=0 ; i<size;++i) {
        cin >> arr[i];
    }

    cout << "The sorted array :\n";
    for(int i=0; i< size-1 ; ++i)
        for (int k = 0; k < size - i - 1; ++k)
        {
            if(arr[k] > arr[k+1])
                swap(arr[k], arr[k+1]);
        }

    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
