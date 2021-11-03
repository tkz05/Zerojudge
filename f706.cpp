#include<iostream>
#include<sstream>
using namespace std;
int main()
{

    string s;
    while(getline(cin,s))
    {
        string S;
        int H,M,T;
        stringstream ss;
        ss<<s;
        ss>>H>>M>>S>>T;
        ss.clear();
        int h=T*1+(T*30)/60;
        int m=(T*30)%60;
        //cout<<h<<" "<<m<<endl;
        M+=m;
        while(M>59)
        {
            M-=60;
            H++;
        }
        H+=h;
        while(H>35)
        {
            H-=36;
        }
        if(H<0)
            H+=36;
        if(M<0)
        {
            M+=60;
            H-=1;
        }


        cout<<H<<":";
        if(M==0)
            cout<<"00"<<":";
        else if(M<10)
            cout<<"0"<<M<<":";
        else
            cout<<M<<":";
        cout<<S<<endl;
    }
}
