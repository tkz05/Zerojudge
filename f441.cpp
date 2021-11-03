#include<iostream>
using namespace std;
int main()
{

    int N,S,M;
    while(cin>>N>>S)
    {
        int ans[N];
        for(int i=0; i<N; i++)
        {
            cin>>ans[i];
        }
        cin>>M;
        while(M--)
        {
            int sum=0,n;
            for(int i=0; i<N; i++)
            {
                cin>>n;
                if(n==ans[i])
                    sum+=S;
            }
            cout<<sum<<endl;
        }
    }
}
