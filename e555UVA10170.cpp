#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int S,D;
    while(cin>>S>>D)
    {
        long long int sum=0;
        long long int n=S;
        while(sum<D)
        {
            sum+=n;
            n++;
        }
        cout<<n-1<<"\n";
    }
}
