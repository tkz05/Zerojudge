#include<iostream>
#include<algorithm>
using namespace std;
bool big(int a,int b)
{
    return a>b;
}
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int *arr=new int[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n,big);
        int count=0;
        for(int i=0;i<n;i++)
        {
            count=i+1;
            m-=arr[i];
            if(m<=0)
            {
                cout<<count<<endl;
                break;
            }
        }
        if(m>0)
            cout<<"OAQ"<<endl;
    }
}
