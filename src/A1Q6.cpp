#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x,y;
    cout << "Dipaditya Das Roll 4" << endl;
    cout << "Enter the value of x : ";
    cin >> x ;
    cout << "Enter the value of y : ";
    cin >> y;

    cout << "The values after swapping : " << endl;
    x = x*y;
    y = x/y;
    x = x/y;
    cout << "x : " << x << "\ny : " << y << endl;
    return 0;
}
