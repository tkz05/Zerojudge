#include<iostream>
using namespace std;
long long int f(long long int num)
{
    long long int count=1;
    while(1)
    {
        if(num==1)
            return count;
        if(num%2==1)
            num=num*3+1;
        else
            num=num/2;
        count++;

    }
}
int main()
{
    long long int a,b;
    while(cin>>a>>b)
    {
        int ca=a,cb=b;
        long long int t;
        if(a>b)
        {
            t=a;
            a=b;
            b=t;
        }
        long long int max=0;
        for(long long int i=a; i<=b; i++)
        {
            long long int num=f(i);
            if(num>max)
                max=num;
        }
        cout<<ca<<" "<<cb<<" "<<max<<endl;
    }
}
