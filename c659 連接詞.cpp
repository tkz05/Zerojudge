#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        string subs="";
        bool torf=true;
        for(int i=0;i<s.size();i++)
        {
            if(torf)
                subs+=s[i];
            else
                cout<<s[i];
            if(s[i]==' '&&torf)
            {
                torf=false;
            }
            else if(isspace(s[i]))
            {
                cout<<subs;
            }
        }
        cout<<endl;
    }
}
