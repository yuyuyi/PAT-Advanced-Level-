#include<iostream>
#include<stack>

using namespace std;

int main()
{
	/*��ӵ�������*/ 
	long a,b;
	cin >> a >> b;
	long sum =a+b;
	
	//�Ƿ�Ϊ�� 
	bool isNegative=(sum<0)?true:false;
	sum = (isNegative)? -sum:sum;
	 
	/*���ڵ����Ž��*/ 
	stack<long> sta;
	 
	/*��¼ÿ������ */
	int k=sum%10;
	
	/*���������ab��Ϊ0*/
	if(sum==0)
	{
		cout << "0";
		return 0;
	}
	
	//�������� 
	while(sum!=0)
	{
		sta.push(k);
		sum/=10;
		k=sum%10;
	}
	
	if(isNegative)cout << "-";
	//������� 
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
