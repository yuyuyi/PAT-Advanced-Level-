#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
	/*��string���������������*/
	string str;
	cin >> str;
	int sum=0;
	
	/*��ջ���������Ӹ�λ����λ��ÿ������*/ 
	stack<int> sta;
	
	/*�����ַ�-48��ASCII��������ֱ���*/ 
	for(int i=0;i<str.length();i++)
	{
		sum += str[i]-48;
	}
	
	/*�ų�0���������*/ 
	if(sum==0)
	{
		cout << "zero";
		return 0;
	}
	
	/*������¼��ǰ��λ����*/ 
	int k=sum%10;
	
	/*����λ������ÿ��λ��Ӧ������ջ��*/ 
	while(sum>0)
	{
		sta.push(k);
		sum/=10;
		k=sum%10;
	}
	
	/*Ϊ�˽��������ĩβ���ո������������һ������*/ 
	if(!sta.empty())
	{
		switch(sta.top())
		{
			case 1:cout << "one" ;break;
			case 2:cout << "two" ;break;
			case 3:cout << "three";break;
			case 4:cout << "four";break;
			case 5:cout << "five";break;
			case 6:cout << "six";break;
			case 7:cout << "seven";break;
			case 8:cout << "eight";break;
			case 9:cout << "nine";break;
			case 0:cout << "zero";break;
		}
		sta.pop();
	}
	/*�ո�+��������ʵ��ĩβ�޿ո�*/ 
	while(!sta.empty())
	{
		switch(sta.top())
		{
			case 1:cout << " one" ;break;
			case 2:cout << " two" ;break;
			case 3:cout << " three" ;break;
			case 4:cout << " four" ;break;
			case 5:cout << " five" ;break;
			case 6:cout << " six" ;break;
			case 7:cout << " seven" ;break;
			case 8:cout << " eight" ;break;
			case 9:cout << " nine" ;break;
			case 0:cout << " zero" ;break;
		}
		sta.pop();
	}
}
