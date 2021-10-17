#include<iostream>
#include<sstream>
using namespace std;
string f(string str)
{
    stringstream ss;
    int temps=0;
    for(int i=0; i<str.size(); i++)
    {
        temps+=char(str[i]-'0');
    }
    ss<<temps;
    ss>>str;
    ss.clear();
    return str;
}
int main()
{
    string str;
    while(cin>>str,str!="0")
    {
        cout<<f(f(f(str)))<<endl;
    }
}
