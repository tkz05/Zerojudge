#include<iostream>
using namespace std;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    while(n--)
    {
        int num,count=0,arr1[m],arr2[m];
        for(int i=0; i<m; i++)
        {
            cin>>num;
            arr1[i]=num;
        }
        for(int i=0; i<m; i++)
        {
            cin>>num;
            arr2[i]=num;
        }
        int i=0,j=0;
        for(;;)
        {
            if(arr1[i]>arr2[j])
            {
                j++;
                if(j==m)
                    break;
            }
            else if(arr1[i]<arr2[j])
            {
                i++;
                if(i==m)
                    break;
            }
            else if(arr1[i]==arr2[j])
            {
                i++;
                j++;
                count++;
                if(i==m)
                    break;
                if(j==m)
                    break;
            }
        }
        cout<<count<<"\n";
    }
}
