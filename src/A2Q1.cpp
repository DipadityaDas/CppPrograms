#include <iostream>
using namespace std;

void countingEvenOdd(int a[], int size) {
    int odd = 0, even = 0;
    for(int i=0; i < size ; i++) {
        if(a[i]%2 == 0) 
            even += 1;
        else
            odd += 1;
    }
    cout << "The number of odd element : " << odd
         << "\nThe number of even element : " << even;
}

int main() {
    cout << "Dipaditya Das Roll 4";
    
    int s, a[20];
    cout << "\nEnter the size of the array : ";
    cin >> s;
    cout << "Enter the array elements :" << endl; 
    for (int i = 0; i < s; ++i)
    {
        cin >> a[i];
    }
    countingEvenOdd(a, s);
    return 0;
}
