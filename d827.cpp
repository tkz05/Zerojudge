#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        cout<<(n/12)*50+(n-(n/12)*12)*5<<endl;
    }

}
