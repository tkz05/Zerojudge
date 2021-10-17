#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str[n],name;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
        getline(cin,name);
    }
    sort(str,str+n);
    int count[2001]={0};
    string cname[2001];
    cname[0]="";
    count[0]=1;
    int c=0;
    int total=1;
    for(int i=0;i<n;i++)
    {
        if(str[i]!=cname[c])
        {
            total++;
            cname[c+1]=str[i];
            count[c+1]++;
            c++;
        }
        else
            count[c]++;
    }
    for(int i=1;i<total;i++)
        cout<<cname[i]<<" "<<count[i]<<endl;
}
