#include<iostream>
#include<stack>

using namespace std;

int main()
{
	/*相加的两个数*/ 
	long a,b;
	cin >> a >> b;
	long sum =a+b;
	
	//是否为负 
	bool isNegative=(sum<0)?true:false;
	sum = (isNegative)? -sum:sum;
	 
	/*用于倒序存放结果*/ 
	stack<long> sta;
	 
	/*记录每次余数 */
	int k=sum%10;
	
	/*特殊情况，ab合为0*/
	if(sum==0)
	{
		cout << "0";
		return 0;
	}
	
	//读入数据 
	while(sum!=0)
	{
		sta.push(k);
		sum/=10;
		k=sum%10;
	}
	
	if(isNegative)cout << "-";
	//输出部分 
	while(sta.size()>0)
	{
		cout << sta.top();
		sta.pop();
		if(sta.size()%3==0 && sta.size()!=0)
		{
			cout << ",";
		}
	}
}
