#include <iostream>
using namespace std;

int main()
{
    cout << "Dipaditya Das Roll 4" << endl;
    int year;
    cout << "Enter any year[ >1600 ] : ";
    cin >> year;
    if(year > 1600){
        if(year%400 == 0 || (year%100 != 0 && year%4 == 0))
            cout << year << " is a leap year";
        else
            cout << year << " is not a leap year" ;
    }
    else
    {
        cout << "Invalid Year";
    }
    
    return 0;
}
