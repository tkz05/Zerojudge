#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n<0)
            n+=109;
        if(n%12==1)
            cout<<"鼠"<<endl;
        else if(n%12==2)
            cout<<"牛"<<endl;
        else if(n%12==3)
            cout<<"虎"<<endl;
        else if(n%12==4)
            cout<<"兔"<<endl;
        else if(n%12==5)
            cout<<"龍"<<endl;
        else if(n%12==6)
            cout<<"蛇"<<endl;
        else if(n%12==7)
            cout<<"馬"<<endl;
        else if(n%12==8)
            cout<<"羊"<<endl;
        else if(n%12==9)
            cout<<"猴"<<endl;
        else if(n%12==10)
            cout<<"雞"<<endl;
        else if(n%12==11)
            cout<<"狗"<<endl;
        else if(n%12==0)
            cout<<"豬"<<endl;
    }
}
