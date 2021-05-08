#include<iostream>
using namespace std;
int main()
{
    long long int fib[82];
    int n, i;

    fib[1] = 1;
    fib[2] = 1;
    for( i=3 ; i<=81 ; i=i+1 )
        fib[i] = fib[i-1] + fib[i-2];

    while( cin >> n )
    {
        if(n==0)
            break;
        cout << fib[n+1] << endl;
    }

    return 0;
}
