#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n;
    while(cin>>n)
        cout<<fixed<<setprecision(3)<<(n-32)*5.0/9.0<<endl;

}
