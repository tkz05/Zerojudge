#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool f(pair<int, char> a, pair<int, char> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    else
        return a.first > b.first;

}
int main()
{
    int n;
    cin>>n;
    cin.get();
    string str;
    int count[26]= {0};
    vector <pair<int, char> > v(26);
    while(n--)
    {
        getline(cin,str);
        for(int i=0; i<str.size(); i++)
        {
            if(isalpha(str[i]))
            {
                if(int(str[i])>=97)
                    v[str[i] - 97].first++;
                else
                    v[str[i] - 65].first++;
            }
        }
        for(int i=0; i<26; i++)
        {
            v[i].second = 'A'+i;
        }
    }
    sort(v.begin(),v.end(),f);
    for (auto i: v)
    {
        if (i.first != 0)
            cout << i.second << " " << i.first << "\n";
    }
}

