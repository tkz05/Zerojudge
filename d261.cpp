#include<iostream>
using namespace std;
int main()
{
    long long int fibW[26],fibM[26];
    int n, i;

    fibW[1] = 1;
    fibW[2] = 1;
    fibM[1] = 1;
    fibM[2] = 2;
    for( i=3 ; i<=25 ; i=i+1 )
    {
        fibW[i] = fibW[i-1] + fibW[i-2];
        fibM[i] = fibM[i-1] + fibW[i];
    }

    while( cin >> n  )
    {
        if(n==-1)
            break;
        cout << fibM[n]<<" "<<fibW[n+1]+fibM[n]<< endl;
    }

    return 0;
}
