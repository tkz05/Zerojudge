#include<iostream>
using namespace std;
int main()
{
    int N,L;
    cin>>N;
    while(N--)
    {
        cin>>L;
        int arr[L],count=0;
        for(int i=0;i<L;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<L;i++)
        {
            for(int j=i+1;j<L;j++)
            {
                if(arr[i]>arr[j])
                {
                    swap(arr[i],arr[j]);
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}
