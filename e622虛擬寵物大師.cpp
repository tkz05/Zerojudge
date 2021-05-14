#include<iostream>
using namespace std;
int main()
{
    int n,S;
    while(cin>>n>>S)
    {

        int CP,IV,maxcount=0,max=0;
        for(int i=0;i<n;i++)
        {
            cin>>CP>>IV;
            int num=S/1000;
            if(IV<=29)
                CP+=num*10;
            else if(IV<=39)
                CP+=num*50;
            else
                CP+=num*100;
            if(CP>max)
            {
                maxcount=i+1;
                max=CP;
            }
        }
        cout<<maxcount<<" "<<max<<endl;
    }

}
