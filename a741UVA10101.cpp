#include<iostream>
#include <iomanip>
using namespace std;
void f(long long int num)
{
    string str[5]= {" kuti"," lakh"," hajar"," shata",""};
    if(num>=10000000)
    {
        f(num/10000000);
        num%=10000000;
        cout<<str[0];
        if(num>0)
            cout<<" ";
    }
    if(num>=100000)
    {

        cout<<num/100000<<str[1];
        num%=100000;
        if(num>0)
            cout<<" ";
    }
    if(num>=1000)
    {

        cout<<num/1000<<str[2];
        num%=1000;
        if(num>0)
            cout<<" ";

    }

    if(num>=100)
    {
        cout<<num/100<<str[3];
        num%=100;
        if(num>0)
            cout<<" ";
    }
    if(num!=0)
    {
        cout<<num;
    }
}
int main()
{
    long long int num;
    long long count=0;
    while(cin>>num)
    {
        count++;
        cout<<setw(4)<<count<<". ";
        if(num==0)
        {
            cout<<0;
        }
        else
        {
            f(num);
        }
        cout<<endl;
    }
}
