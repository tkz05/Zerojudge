#include<iostream>
using namespace std;
int main()
{
    int sum1=0,sum2=0,sum3=0,sum4=0;
    int num;
    for(int i=0;i<4;i++)
    {
        cin>>num;
        sum1+=num;
    }
    for(int i=0;i<4;i++)
    {
        cin>>num;
        sum2+=num;
    }
    cout<<sum1<<":"<<sum2<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>num;
        sum3+=num;
    }
        for(int i=0;i<4;i++)
    {
        cin>>num;
        sum4+=num;
    }
    cout<<sum3<<":"<<sum4<<endl;
    if(sum1-sum2>0&&sum3-sum4>0)
        cout<<"Win"<<endl;
    else if(sum1-sum2<0&&sum3-sum4<0)
        cout<<"Lose"<<endl;
    else
        cout<<"Tie"<<endl;
}
