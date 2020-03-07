#include <iostream>
using namespace std;

int isprime(int N)
{
    if (N < 2 || (!(N & 1) && N != 2))
        return 0;
    for (int i = 3; i * i <= N; i += 2)
    {
        if (!(N % i))
            return 0;
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    int m, n, c=0;
    cout << "Dipaditya Das Roll 4" << endl;
    cout << "Enter the lower bound : ";
    cin >> m;
    cout << "Enter the upper bound : ";
    cin >> n;
    for (int i = m; i <= n; i++)
    {
        if (isprime(i)) c++;
    }
    cout << "The total number of prime number = " << c;
    return 0;
}
