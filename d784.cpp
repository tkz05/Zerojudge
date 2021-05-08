    #include<iostream>
    #include<sstream>
    using namespace std;
    int main()
    {
        int n,longth;
        cin>>n;
        string s;
        stringstream ss;
        while(n--)
        {
            cin>>longth;
            cin.get();
            int sum=0;
            int num[longth]= {};
            getline(cin,s);
            int i=0;
            ss<<s;
            while(ss>>num[i])
            {
                i++;
            }
            ss.clear();
            int max=-10000;
            for(int j=0; j<i; j++)
            {
                sum=0;
                for(int k=j; k<i; k++)
                {
                    sum+=num[k];
                    if(sum>max)
                        max=sum;
                }
            }
            cout<<max<<endl;
        }
    }
