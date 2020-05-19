#include<iostream>
#include<vector>

using namespace std;

int main()
{
	/*邻接矩阵和城市消防队数量*/
	int mp[50][50]=0;
	int city_fireman[50]=0;
	
	/*第一行的数据*/
	int num_city;
	int num_road;
	int incity,tocity;
	
	/*读取第一行 */ 
	cin >> num_city >> nunm_road >> incity >> tocity;
	
	
	/*读取第二行 */ 
	for(int i=0;i<num_city;i++)
	{
		cin >> city_fireman[i];
	}
	
	/*读取邻接矩阵*/ 
	for(int i=0;i<num_road;i++)
	{
		int a,b;
		cin >> a >> b;
		cin >> mp[a][b];
	}
	
	
	
}
