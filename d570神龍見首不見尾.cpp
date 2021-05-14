#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long a;
    while(cin>>a)
    {
        while(a/10!=0)
        {
            cout<<a<<"\n";
            a=a/10;
        }
        cout<<a<<endl;
    }
}
