#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    int count=0;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
            return 0;
        cout<<int(sqrt(b))-ceil(sqrt(a))+1<<endl;
    }
}
