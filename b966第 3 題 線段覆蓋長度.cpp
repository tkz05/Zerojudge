#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int N;
    while(cin>>N)
    {
        int in[N];
        int out[N];
        for(int i=0;i<N;i++)
            cin>>in[i]>>out[i];
        sort(in,in+N);
        sort(out,out+N);
        int count=0;
        int I=0,O=0;
        int yes=0;
        for(int i=in[0];i<=out[N-1];i++)
        {
            while(in[I]==i)
            {
                yes++;
                I++;
            }
            while(out[O]==i)
            {
                yes--;
                O++;
            }
            if(yes>0)
                count++;
        }
        cout<<count<<endl;

    }

}
