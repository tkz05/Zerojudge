#include<iostream>
using namespace std;
int main()
{
    int S,E,A;
    while(cin>>S>>E>>A)
    {
        int day=1;
        int magic=1;
        int count=1;
        while(S<E)
        {
            //cout<<day<<" "<<magic<<" "<<S<<endl;
            count++;
            if(count>9)
            {
                count=0;
                day+=2;
                A--;
                if(A==0)
                    break;
            }
            else
            {
                if(magic%3==0)
                {
                    S=S+int(S/3);
                }
                else
                {
                    S=S+int(S/10);
                }
                if(count!=9)
                    magic++;
                day++;
            }

        }
        if(A==0)
            cout<<"unsalable"<<endl;
        else
            cout<<day<<endl;
    }
}
