#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int x,ia;//ia�Ox���Y��
	while(cin>>x)//��J�Ĥ@�檺�Ʀr
	{
		long long count=0,ans=0;//count�p���J�X�ӼơAans�p�⵪��
		string sa;//��J�Φr��
		stringstream ss;//ss�r����Ʀr�Ϊ�
		ss.clear(); //���M�ũȥX��

		getline(cin,sa);//cin���ᱵgetline�|�����D�ҥH�n�h���@��
		getline(cin,sa);//��J�ĤG�浹���Ʀr
		ss<<sa;//�N�r���J���r��y

		while(ss>>ia)//�N�r��y�̪��Ʀr�@�ӭ��ഫ��int
		{
			count++;//x���̰����謰count-1
		}

		ss.clear();//�b��@��
		ss<<sa;

		ss>>ia;//���p��Ĥ@�Ӽ�
		ans=ia*(count-1);//�O�o�n��L��
						 //�Y�ƻP����ۭ�(�ϥܤ������u���a��)

		while(ss>>ia)
		{
			count--;//�e���p��L�F�A�ҥH�1�A�p��U�@��
			ans=ans*x+ia*(count-1);//(�ϥܤ��侀�u���a��)
		}
		ans=(ans-ia*(count-1))/x;//�]���L���̫�`�ƨS�F���κ�
		 						 //�ҥH�n�p��^�Ӥ@��
		cout<<ans<<endl;//��X
	}
}
