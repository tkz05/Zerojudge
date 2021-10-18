#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int x,ia;//ia是x的係數
	while(cin>>x)//輸入第一行的數字
	{
		long long count=0,ans=0;//count計算輸入幾個數，ans計算答案
		string sa;//輸入用字串
		stringstream ss;//ss字串轉數字用的
		ss.clear(); //先清空怕出錯

		getline(cin,sa);//cin之後接getline會有問題所以要多打一次
		getline(cin,sa);//輸入第二行給的數字
		ss<<sa;//將字串輸入給字串流

		while(ss>>ia)//將字串流裡的數字一個個轉換成int
		{
			count++;//x的最高次方為count-1
		}

		ss.clear();//在轉一次
		ss<<sa;

		ss>>ia;//先計算第一個數
		ans=ia*(count-1);//記得要算微分
						 //係數與次方相乘(圖示中紅底線的地方)

		while(ss>>ia)
		{
			count--;//前面計算過了，所以減掉1再計算下一個
			ans=ans*x+ia*(count-1);//(圖示中橘底線的地方)
		}
		ans=(ans-ia*(count-1))/x;//因為微分最後常數沒了不用算
		 						 //所以要計算回來一次
		cout<<ans<<endl;//輸出
	}
}
