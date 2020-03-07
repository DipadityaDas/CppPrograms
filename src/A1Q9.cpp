#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Dipaditya Das Roll 4" << endl;
    int N,a,d,r=0;
    cout << "Enter any number : ";
    cin >> N;
    a = N;
    while (a > 0)
    {
        d = a%10;
        r = r*10 + d;
        a = a/10;
    }
    if(r== N) cout << "The number is Palindrome.";
    else cout << "The number is not Palindrome.";
    return 0;
}
