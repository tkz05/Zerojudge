#include<iostream>
using namespace std;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int N,E,Q,temp;
    while(cin>>N)
    {
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        cin>>E>>Q;
        while(Q--)
        {
            cin>>temp;
            for(int i=0;i<N;i++)
            {
                if(arr[i]==temp)
                {
                    arr[i]=E;
                    E=temp;
                    break;
                }
            }
        }
        for(int i=0;i<N;i++)
        {
            if(i!=N-1)
                cout<<arr[i]<<" ";
            else
                cout<<arr[i]<<"\n";
        }
    }
}
