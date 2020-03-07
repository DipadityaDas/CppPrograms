#include <iostream>
using namespace std;
int fact(int n)
{
    if ((n == 0) || (n == 1))
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    cout << "Dipaditya Das Roll 4" << endl;
    int N;
    cout << "Enter any number : ";
    cin >> N;
    cout << "The Factorial of " << N << ": " << fact(N);
    return 0;
}