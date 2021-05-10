#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int H[n]={0};
    int W[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>H[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>W[i];
    }
    int min=H[0]*W[0];
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(H[i]*W[i]<min)
        {
            min=H[i]*W[i];
            count=i;
        }
    }
    cout<<H[count]<<" "<<W[count]<<endl;
}
