#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        bool torf=false;
        int X,a,b,min=1001;
        cin>>X>>a>>b;
        if(X%a==0)
        {
            torf=true;
            if(X/a<min)
                min=X%a;
        }
        else if((X%a)%b==0)
        {
            torf=true;
            if((X%a)/b<min)
                min=(X%a)/b;
        }
        else if(X%b==0)
        {
            torf=true;
            if(X/b<min)
                min=X/b;
        }
        if(!torf)
            cout<<-1<<endl;
        else
            cout<<min<<endl;

    }

}
