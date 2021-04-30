#include<iostream>
using namespace std;
int main()
{
    int M,N,K;
    int count=1;
    cin>>N;
    while(N--)
    {
        cin>>M>>K;
        cout<<"Case "<<count++<<" :"<<endl;
        for(int i=1; i<=K; i++)
        {
            if(i==K)
                cout<<"第"<<i<<"位 : 拿"<<M/K+M%K<<"元並說DD! BAD!"<<endl;
            else
                cout<<"第"<<i<<"位 : 拿"<<M/K<<"元並說DD! BAD!"<<endl;
        }
    }


}
