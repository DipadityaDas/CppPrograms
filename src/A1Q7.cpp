#include <iostream>
using namespace std;

int Fibs(int low, int high)
{
    int f1 = 0, f2 = 1, f3 = 1;

    while (f1 <= high)
    {
        if (f1 >= low)
            cout << f1 << " ";
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
    }

    return 0;
}

int main()
{
    cout << "Dipaditya Das Roll 4 " << endl;
    int low = 10, high = 100;
    cout << "Fibonacci Numbers are \n";
    Fibs(low, high);
    return 0;
}