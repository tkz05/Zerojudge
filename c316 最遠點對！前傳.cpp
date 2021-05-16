#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int X[n],Y[n];
        for(int i=0; i<n; i++)
        {
            cin>>X[i]>>Y[i];
        }
        double max=0;
        int maxx=-1,maxy=-1;
        int i,j;
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                double d=sqrt((X[i]-X[j])*((X[i]-X[j]))+(Y[i]-Y[j])*(Y[i]-Y[j]));
                if(d==max)
                {
                    if(i<maxx)
                    {
                        max=d;
                        maxx=i;
                        maxy=j;
                    }
                    else if(i==maxx)
                    {
                        if(j<maxy)
                        {
                            max=d;
                            maxx=i;
                            maxy=j;
                        }
                    }
                }
                else if(d>max)
                {
                    max=d;
                    maxx=i;
                    maxy=j;
                }
            }
        }
        cout<<maxx<<" "<<maxy<<endl;
    }

}
