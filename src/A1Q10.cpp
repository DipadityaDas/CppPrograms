#include <iostream>
using namespace std;
int isPerfect(int n){
    int c=0;
    for(int i=1; i < n; ++i)
    {
        if(n%i == 0)
            c += i;
    }
    return c==n;

}
int main()
{
    cout << "Dipaditya Das Roll 4" << endl;
    int N;
    cout << "Enter any number : " ;
    cin >> N;
    if(isPerfect(N)) cout << "The number is perfect" ;
    else cout << "The number is not perfect";
    return 0;
}
