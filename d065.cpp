#include<iostream>
using namespace std;
int main()
{
    int max=0,num;
    cin.tie(0);
    ios::sync_with_stdio(false);
    for(int i=0;i<3;i++)
    {
        cin>>num;
        if(num>max)
            max=num;
    }
    cout<<max<<"\n";
}
