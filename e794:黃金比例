#include<iostream>
using namespace std;
int main()
{
    long long int fib[46];
    int n, i;

    fib[1] = 1;
    fib[2] = 1;
    for( i=3 ; i<=45 ; i=i+1 )
        fib[i] = fib[i-1] + fib[i-2];

    while( cin >> n )
    {
        cout << fib[n]<<":"<<fib[n]+fib[n-1] << endl;
    }

    return 0;
}
