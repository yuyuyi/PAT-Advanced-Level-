#include<iostream>
#include<vector>

using namespace std;

int main()
{
	/*�ڽӾ���ͳ�������������*/
	int mp[50][50]=0;
	int city_fireman[50]=0;
	
	/*��һ�е�����*/
	int num_city;
	int num_road;
	int incity,tocity;
	
	/*��ȡ��һ�� */ 
	cin >> num_city >> nunm_road >> incity >> tocity;
	
	
	/*��ȡ�ڶ��� */ 
	for(int i=0;i<num_city;i++)
	{
		cin >> city_fireman[i];
	}
	
	/*��ȡ�ڽӾ���*/ 
	for(int i=0;i<num_road;i++)
	{
		int a,b;
		cin >> a >> b;
		cin >> mp[a][b];
	}
	
	
	
}
