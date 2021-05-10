#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x,y,L,R,n;
    while(cin>>x>>y>>L>>R)
    {
        cin>>n;
        double count=0,x1,y1,l;
        double longth;
        while(n--)
        {
            cin>>x1>>y1>>l;
            if(l>L)
                continue;
            longth=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
            if(longth<=R)
                count++;
        }
        cout<<count<<endl;
    }
}
