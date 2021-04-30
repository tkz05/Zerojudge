#include<iostream>
using namespace std;
bool AND(int a,int b,int c)
{
    if(a>0&&b>0&&c==1)
        return true;
    else if(a==0&&b==0&&c==0)
        return true;
    else if(a>0&&b==0&&c==0)
        return true;
    else if(a==0&&b>0&&c==0)
        return true;
    else
        return false;
}
bool OR(int a,int b,int c)
{
    if((a>0||b>0)&&c==1)
        return true;
    else if(a==0&&b==0&&c==0)
        return true;
    else
        return false;
}
bool XOR(int a,int b,int c)
{
    if(a>0&&b>0&&c==1)
        return false;
    else if(a==0&&b==0&&c==1)
        return false;
    else if(a>0&&b==0&&c==0)
        return false;
    else if(a==0&&b>0&&c==0)
        return false;
    else
        return true;
}
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        bool A=AND(a,b,c);
        bool B=OR(a,b,c);
        bool C=XOR(a,b,c);
        if(A)
            cout<<"AND"<<endl;
        if(B)
            cout<<"OR"<<endl;
        if(C)
            cout<<"XOR"<<endl;
        if(!A&&!B&&!C)
            cout<<"IMPOSSIBLE"<<endl;
    }
}
