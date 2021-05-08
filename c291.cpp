#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int myself[n]={};
        int friends[n]={};
        int no[n]={};
        for(int i=0;i<n;i++)
        {
            myself[i]=i;
            cin>>friends[i];
            no[i]=0;
        }
        int sum=0;

        for(int i=0,j=0;i<n;)
        {
            //cout<<myself[i]<<" "<<friends[j]<<"\n";
            if(myself[i]!=friends[j]&&(no[j]!=1))
            {
                 no[j]=1;
                 j=friends[j];
                 continue;
            }
            else if(no[j]==0)
            {
                sum++;
                no[j]=1;
            }
            i++;
            j=i;
        }
        cout<<sum<<endl;
    }
}

