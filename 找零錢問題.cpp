#include<iostream>
using namespace std;
int main()
{
    int numDrinks;
    int payment;
    while(1)
    {
        cout<<"請輸入欲買的罐數:";
        cin>>numDrinks;
        cout<<endl;
        cout<<"請輸入付款金額:";
        cin>>payment;
        cout<<endl;
        int change=payment-numDrinks*29;;
        if(change>=500)
        {
            cout<<"500*1"<<endl;
            change-=500;
        }
        else
            cout<<"500*0"<<endl;
        if(change>=100)
        {
            cout<<"100*"<<(change/100)<<endl;
            change-=100*(change/100);
        }
        else
            cout<<"100*0"<<endl;
        if(change>=50)
        {
            cout<<"50*"<<(change/50)<<endl;
            change-=50*(change/50);
        }
        else
            cout<<"50*0"<<endl;
        if(change>=10)
        {
            cout<<"10*"<<(change/10)<<endl;
            change-=10*(change/10);
        }
        else
            cout<<"10*0"<<endl;
        if(change>=50)
        {
            cout<<"5*"<<(change/5)<<endl;
            change-=5*(change/5);
        }
        else
            cout<<"5*0"<<endl;
        if(change>=1)
        {
            cout<<"1*"<<(change/1)<<endl;
        }
        else
            cout<<"1*0"<<endl;
        cout<<endl;
    }
}

