#include<iostream>
#include <map>
#include<sstream>
using namespace std;
int main()
{
    map<int, int > mapnum;
    map<int, int >::iterator iter;
    string str;
    stringstream ss;
    getline(cin,str);
    ss<<str;
    int n;
    while(ss>>n)
    {
        iter = mapnum.find(n);
        if(iter==mapnum.end())
            mapnum[n] = 1 ;
        else
            mapnum[n]++;
    }
    for(iter=mapnum.begin();iter != mapnum.end();iter++)
    {
        if((iter->second)%3!=0)//有同樣號碼的石頭 不是找=3是找餘數
        {
            cout<<iter->first<<endl;
            break;
        }
    }
}
