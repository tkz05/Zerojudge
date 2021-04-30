#include<iostream>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {
        char s[3];
        s[0]=str[6];
        s[1]=str[7];
        s[2]=str[8];
        int n=atoi(s);
        int max=-1,max2=-1;
        int big=0;
        for(int i=0;i<9;i++)
        {
            if(int(str[i]-'0')>=max)
            {
                max=int(str[i]-'0');
                big=i;
            }
        }
        for(int j=0;j<9;j++)
        {
            if(j!=big&&(int(str[j]-'0')>=max2))
            {
                max2=int(str[j]-'0');
            }
        }
        if((max*max+max2*max2)==n)
            cout<<"Good Morning!"<<endl;
        else
            cout<<"SPY!"<<endl;
    }
}
