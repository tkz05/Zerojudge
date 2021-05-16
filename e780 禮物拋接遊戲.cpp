#include<iostream>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    int loca=0,ans=0,num;
    while(n--)
    {
        cin>>s;
        if(s=="L")
            loca--;
        else if(s=="R")
            loca++;
        else if(s=="Gift")
        {
            cin>>num;
            if(num==loca)
                ans++;
        }
    }
    cout<<ans<<endl;


}
