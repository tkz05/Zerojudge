#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum,abs;
    cin>>n;
    while(n--)
    {
        cin>>sum>>abs;
        int a=(sum+abs)/2;
        int b=a-abs;
        if((sum+abs)%2!=0)
            cout<<"impossible"<<endl;
        else if(a<0||b<0)
            cout<<"impossible"<<endl;
        else
            cout<<a<<" "<<b<<endl;

    }
}
