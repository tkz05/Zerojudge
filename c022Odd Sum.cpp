#include<iostream>
using namespace std;
int main()
{
    int n,a,b,count=1;
    cin>>n;
    while(cin>>a>>b)
    {
        int sum=0;
        for(int i=a;i<=b;i++)
            if(i%2==1)
                sum+=i;
        cout<<"case "<<count<<" "<<sum<<endl;
        count++;
    }

}
