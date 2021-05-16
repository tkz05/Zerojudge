#include<iostream>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int count=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
                count++;
            else if(s[i]=='6')
                count++;
            else if(s[i]=='9')
                count++;
            else if(s[i]=='8')
                count+=2;
        }
        cout<<count<<endl;
    }


}
