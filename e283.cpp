#include<iostream>
using namespace std;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    while(cin>>n)
    {
        char c;
        for(int i=0; i<n; i++)
        {
            string str="";
            for(int j=0; j<4; j++)
            {
                cin>>c;
                str+=c;
            }
            if(str=="0101")
                cout<<"A";
            else if(str=="0111")
                cout<<"B";
            else if(str=="0010")
                cout<<"C";
            else if(str=="1101")
                cout<<"D";
            else if(str=="1000")
                cout<<"E";
            else if(str=="1100")
                cout<<"F";
        }
        cout<<"\n";
    }
}
