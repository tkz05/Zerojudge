#include<iostream>
using namespace std;
int main()
{
    int T;
    int M,D;
    int Monthday[12]={0,31,59,90,120,151,181,212,243,273,304,334};
    string day[7]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    cin>>T;
    while(T--)
    {
        int sum=0;
        cin>>M>>D;
        sum=Monthday[(M-1)]+D;
        cout<<day[(sum-1)%7]<<endl;
    }
}
