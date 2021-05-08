#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n<=2500)
        {
            cout<<1<<" ";
            if(n%25==0)
            {
                cout<<n/25<<" ";
                cout<<25<<endl;
            }
            else
            {
                cout<<n/25+1<<" ";
                cout<<n%25<<endl;
            }

        }
        else if(n<=7500)
        {
            cout<<2<<" ";
            if((n-2500)%50==0)
            {
                cout<<(n-2500)/50<<" ";
                cout<<50<<endl;
            }
            else
            {
                cout<<(n-2500)/50+1<<" ";
                cout<<(n-2500)%50<<endl;
            }
        }
        else
        {
            cout<<3<<" ";
            if((n-7500)%25==0)
            {
                cout<<(n-7500)/25<<" ";
                cout<<25<<endl;
            }
            else
            {
                cout<<(n-7500)/25+1<<" ";
                cout<<(n-7500)%25<<endl;
            }
        }
    }
}
