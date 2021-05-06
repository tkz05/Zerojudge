#include<iostream>
using namespace std;
int main()
{
    int count=0,Assist=0,Die=0,Kill=0;
    int n;
    cin>>n;
    string str;
    while(n--)
    {
        cin>>str;
        if(str=="Get_Kill")
        {
            count++;
            if(count<3)
                cout<<"You have slain an enemie."<<endl;
            else if(count==3)
                cout<<"KILLING SPREE!"<<endl;
            else if(count==4)
                cout<<"RAMPAGE~"<<endl;
            else if(count==5)
                cout<<"UNSTOPPABLE!"<<endl;
            else if(count==6)
                cout<<"DOMINATING!"<<endl;
            else if(count==7)
                cout<<"GUALIKE!"<<endl;
            else
                cout<<"LEGENDARY!"<<endl;
        }
        if(str=="Get_Assist")
        {
            Assist++;
        }
        else if(str=="Die")
        {
            Die++;
            if(count<3)
                cout<<"You have been slained."<<endl;
            else
                cout<<"SHUTDOWN."<<endl;
            Kill=count;
            count=0;
        }
    }
    cout<<count<<"/"<<Assist<<"/"<<Die<<endl;

}
