#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    while(cin>>num1>>num2)
    {
        if(num1==0 && num2==0)
            return 0;
        int i=0,c=0;
        int count=0;
        while( num1>0 || num2>0)
        {
            int temp=0;
            temp+=num1%10;
            num1/=10;
            temp+=num2%10;
            num2/=10;
            if(temp+c>=10)
            {
                count++;
                c=1;
            }
            else
            {
                c=0;
            }
        }
        if(count==0)
            cout<<"No carry operation."<<endl;
        else if(count==1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<count<<" carry operations."<<endl;

    }


}

