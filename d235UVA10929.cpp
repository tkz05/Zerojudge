#include<iostream>
using namespace std;
int main()
{
    string str;
    while(cin>>str,str!="0")
    {
        int type=1;
        int sum=0;
        for(int i=str.size()-1;i>=0;i--)
        {
            if(type)
                sum+=int(str[i]-'0');
            cout<<sum<<endl;

        }
    }
}
