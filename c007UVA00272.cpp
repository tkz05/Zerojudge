#include<iostream>
using namespace std;
int main()
{
    string str;
    string ans;
    int first=1;
    while(getline(cin,str))
    {
        ans="";
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='\"'&&first==1)
            {
                ans+="``";
                first=0;
            }
            else if(str[i]=='\"'&&first==0)
            {
                ans+="''";
                first=1;
            }
            else
                ans+=str[i];
        }
        cout<<ans<<endl;
    }
}
