#include<iostream>
using namespace std;
long long int f(long long int n)
{
    long long int count=n/5;
    return count;
}
int main()
{
    long long int l,h;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(cin>>l>>h)
    {
        if(l==0 && h==0)
            break;
        cout<<f(h)-f(l)+1<<"\n";
    }
}
