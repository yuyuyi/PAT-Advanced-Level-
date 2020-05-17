#include<iostream>
#include<map>
#include<cstdio>

using namespace std;

int main()
{
	/*数据在输入同时直接读入map*/
	map<int,float> mp;
	int k;
	int m;
	float num;
	
	int max = -1;//记录最大m 
	
	/*读入部分，个人习惯非算法部分for循环中不使用i*/
	for(int iii=0;iii<2;iii++)//读入两行 
	{
		cin >> k;
		for(int ii=0;ii<k;ii++)// 每行k次
		{
			cin >> m >> num;
			max = (m>max)?m:max; 
			/*读入map*/ 
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
