#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int N;
    string str;
    stringstream ss;
    while(cin>>N>>str)
    {
        int count=0,max=0,index,num,sum=0,round=0;
        for(int i=str.size()-1;i>=0;i--)
        {
            if(count<N)
            {
                count++;
                ss<<str[i];
                ss>>num;
                ss.clear();
                sum+=num;
            }
            if(i==0 || count==N)
            {
                round++;
                if(max<=sum)
                {
                    max=sum;
                    index=round;
                }
                count=0;
                sum=0;
            }
        }
        cout<<index<<" "<<max<<endl;
    }
}
