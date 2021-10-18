#include<iostream>
using namespace std;
int GCD(int a,int b)
{
    int t;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}
int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    int N;
    while(cin>>N,N!=0)
    {
        int G=0;
        for(int i=1; i<N; i++)
        {
            for(int j=i+1; j<=N; j++)

            {
                G+=GCD(i,j);

            }
        }
        cout<<G<<"\n";
    }
}


