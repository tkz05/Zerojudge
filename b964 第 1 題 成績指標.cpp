#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,num;
    while(cin>>n)
    {
        int *arr=new int[n];
        int best=-1,worst=101;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>best&&arr[i]<60)
                best=arr[i];
            if(arr[i]<worst&&arr[i]>59)
                worst=arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++)
            cout<<arr[i]<<" ";
        cout<<arr[n-1]<<endl;
        if(best==-1)
            cout<<"best case"<<endl;
        else
            cout<<best<<endl;
        if(worst==101)
            cout<<"worst case"<<endl;
        else
            cout<<worst<<endl;
        delete []arr;
    }

}
