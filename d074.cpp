#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max=0,num;
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(n--)
    {
        cin>>num;
        if(num>max)
            max=num;
    }
    cout<<max<<"\n";
}
