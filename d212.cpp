#include<iostream>
using namespace std;
int main()
{
    long long int fib[102];
    int n, i;

    fib[1] = 1;
    fib[2] = 1;
    for( i=3 ; i<=101 ; i=i+1 )
        fib[i] = fib[i-1] + fib[i-2];
    while( cin >> n )
    {
        cout << fib[n+1] << endl;
    }
}
