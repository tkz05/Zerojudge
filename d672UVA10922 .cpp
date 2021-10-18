#include<iostream>
#include<sstream>
using namespace std;
bool f(string s)
{
    int num=0;
    for(int i=0; i<s.size(); i++)
    {
        num+=int(s[i]-'0');
    }
    if(num%9==0)
        return true;
    else
        return false;
}
int f2(string str,int count)
{
    int num=0;
    stringstream ss;
    for(int i=0; i<str.size(); i++)
    {
        num+=int(str[i]-'0');
    }
    ss<<num;
    ss>>str;
    ss.clear();
    count++;
    if(num==9)
        return count;
    else
        return f2(str,count);

}
int main()
{
    string str;
    while(cin>>str,str!="0")
    {
        cout<<str;
        int count=0;
        bool torf=f(str);
        if(torf)
        {
            int num=f2(str,count);
            cout<<" is a multiple of 9 and has 9-degree "<<num<<"."<<endl;

        }
        else
            cout<<" is not a multiple of 9."<<endl;
    }
}
