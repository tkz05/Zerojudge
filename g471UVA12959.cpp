#include<iostream>
using namespace std;
int main()
{
    int J,R;
    while(cin>>J>>R)
    {
        if(J==0 &&R==0)
            break;
        int arr[J];
        for(int i=0;i<J;i++)
            arr[i]=0;
        int num,max=0,ans;
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<J;j++)
            {
                cin>>num;
                arr[j]+=num;
                if(arr[j]>=max)
                {
                    max=arr[j];
                    ans=j;
                }
            }
        }
        cout<<ans+1<<endl;
    }
}
