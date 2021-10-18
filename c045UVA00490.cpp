#include<iostream>
using namespace std;
int main()
{
    string str;
    string allstr[100];
    int strlen[100]={0};
    int max=0;
    int n=0;
    while(getline(cin,str))
    {
        allstr[n]=str;
        strlen[n]=str.size();
        if(strlen[n]>max)
            max=strlen[n];
        n++;
    }
    for(int i=0;i<max;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(i<strlen[j])
                cout<<allstr[j][i];
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
