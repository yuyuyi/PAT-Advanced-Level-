#include<iostream>
#include<map>
#include<cstdio>

using namespace std;

int main()
{
	/*����������ͬʱֱ�Ӷ���map*/
	map<int,float> mp;
	int k;
	int m;
	float num;
	
	int max = -1;//��¼���m 
	
	/*���벿�֣�����ϰ�߷��㷨����forѭ���в�ʹ��i*/
	for(int iii=0;iii<2;iii++)//�������� 
	{
		cin >> k;
		for(int ii=0;ii<k;ii++)// ÿ��k��
		{
			cin >> m >> num;
			max = (m>max)?m:max; 
			/*����map*/ 
			if(mp[m])mp[m]+=num;
			else mp[m]=num;
		} 
	}
	int sum=0;
	for(int i=max;i>=0;i--)
	{	
		if(mp[i])
		{
			sum++;
		}
	}
	cout << sum;
	for(int i=max;i>=0;i--)
	{	
		if(mp[i])
		{
			
			cout << " " << i << " " ;
			printf("%.1f",mp[i]); 
		}
	}
}
