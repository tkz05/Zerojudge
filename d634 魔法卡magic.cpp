#include<iostream>
#include <cstring>
#include<algorithm>
using namespace std;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    cin.get();
    string s,str[n]= {};
    for(int i=0; i<n; i++)
    {
        getline(cin,str[i]);
    }
    int count=1;
    sort(str, str + n);
    for(int i=0; i<n; i++)
    {
        cout<<str[i]<<"\n";
    }
}
