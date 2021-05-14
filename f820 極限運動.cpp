#include<iostream>
using namespace std;
int main()
{
    int N;
    while(cin>>N)
    {
        int *arr=new int[N];
        int n;
        for(int i=0;i<N;i++)
            cin>>arr[i];
        cin>>n;
        n=n-1;
        if(n==0)
        {
            while(arr[n]>=arr[n+1])
            {
                n++;
            }
        }
        else if(n==N-1)
        {
            while(arr[n]>=arr[n-1])
            {
                n--;
            }
        }
        else if(arr[n]-arr[n+1]>arr[n]-arr[n-1])
        {
            while(arr[n]>=arr[n+1])
            {
                n++;
            }
        }
        else
        {
            while(arr[n]>=arr[n-1])
            {
                n--;
            }
        }
        cout<<n+1<<endl;
    }
}
