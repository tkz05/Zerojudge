#include<iostream>
using namespace std;
int main()
{
    int f[40]= {0};
    f[0]=0;
    f[1]=1;
    for(int i=2; i<40; i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    int N,num;
    cin>>N;
    while(N--)
    {
        cin>>num;
        cout<<num<<" = ";
        bool torf=false;
        for(int i=39; i>=2; i--)
        {
            if(num-f[i]>=0)
            {
                cout<<1;
                num-=f[i];
                torf=true;
            }
            else if(torf)
            {
                cout<<0;
            }
        }
        cout<<" (fib)"<<endl;
    }
}
