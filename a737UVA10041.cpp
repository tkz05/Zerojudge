#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int r;
    while(N--)
    {
        cin>>r;
        int num[r+1]={0};
        int n;
        for(int i=0; i<r; i++)
        {
            cin>>num[i];
        }

        sort(num,num+r);
        int medium=num[r/2];
        int sum=0;
        for(int i=0; i<r; i++)
        {
            sum+=abs(medium-num[i]);
        }
        cout<<sum<<endl;
    }

}
