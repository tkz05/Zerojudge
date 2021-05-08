#include<iostream>
using namespace std;
int main()
{
    long long int M,N,K;
    long long int count=1;
    cin>>N;
    while(N--)
    {
        cin.tie(0);
        ios::sync_with_stdio(false);
        cin>>M>>K;
        cout<<"Case "<<count++<<" :"<<endl;
        long long int a=M/K+M%K;
        long long int b=M/K;
        for(long long int i=1; i<K; i++)
        {
            cout<<"第"<<i<<"位 : 拿"<<b<<"元並說DD! BAD!\n";
        }
            cout<<"第"<<K<<"位 : 拿"<<a<<"元並說DD! BAD!\n";
    }
}
