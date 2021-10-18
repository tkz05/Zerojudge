#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int count=1;count<=n;count++)
    {
        char c1,c2;
        int T;
        cin>>c1>>c2>>T;
        long long int arr[T+1][T+1];
        for(int i=1; i<=T; i++)
        {
            for(int j=1; j<=T; j++)
            {
                cin>>arr[i][j];
            }
        }
        bool TorF=true;
        for(int i=1,k=T; i<=T,k>=1; i++,k--)
        {
            for(int j=1,l=T; j<=T,l>=1; j++,l--)
            {
                if(arr[i][j]<0)
                    TorF=false;
                else if(i==(T+1)/2&&j==(T+1)/2)
                    break;
                else if(arr[i][j]!=arr[k][l])
                    TorF=false;
            }
        }
        if(TorF)
            cout<<"Test #"<<count<<": Symmetric."<<endl;
        else
            cout<<"Test #"<<count<<": Non-symmetric."<<endl;
    }
}
