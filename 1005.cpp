#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
	/*用string来保存输入的数据*/
	string str;
	cin >> str;
	int sum=0;
	
	/*用栈来倒叙加入从个位到百位的每个数字*/ 
	stack<int> sta;
	
	/*数字字符-48的ASCII码就是数字本身*/ 
	for(int i=0;i<str.length();i++)
	{
		sum += str[i]-48;
	}
	
	/*排除0的特殊情况*/ 
	if(sum==0)
	{
		cout << "zero";
		return 0;
	}
	
	/*用来记录当前个位数字*/ 
	int k=sum%10;
	
	/*将个位到后续每个位对应保存在栈中*/ 
	while(sum>0)
	{
		sta.push(k);
		sum/=10;
		k=sum%10;
	}
	
	/*为了解决它不让末尾留空格，所以先输出第一个数字*/ 
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
	/*空格+后续数字实现末尾无空格*/ 
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
