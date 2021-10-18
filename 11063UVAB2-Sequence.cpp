#include<iostream>
using namespace std;
int main()
{
    int n[10000];
    int check[20010];
    int N,count=1;
    while(cin>>N)
    {
        for(int i=0;i<N;i++)
            cin>>n[i];
        bool TorF=true;
        int index;
        for(int i=0;i<20010;i++)
            check[i]=0;
        for(int i=0;i<N;i++)
        {
            for(int j=i;j<N;j++)
            {
                index=n[i]+n[j];
                if(check[index]==1)
                {
                    TorF=false;
                    break;
                }
                else
                    check[index]=1;
            }
            if(!TorF)
                break;
        }
        cout<<"Case #"<<count++;
        if(TorF)
            cout<<": It is a B2-Sequence."<<endl;
        else
            cout<<": It is not a B2-Sequence."<<endl;
    }
}
