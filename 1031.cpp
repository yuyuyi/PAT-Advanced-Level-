#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>

using namespace std;

int main()
{
	string str;
	
	cin >> str;
	
	int N,n1,n2;
	N = str.length();
	
	int k;
	
	/*
	i:n2
	k:n1,n3
	
	i + 2k + 2 = N
	*/
	for(int i=3;i<N;i++)
	{
		k = (N - i + 2)/2;
		if(i>=k)
		{
			n2 = N - k*2 +2;	
			n1 = k;
			break;
		}
	}
	
	for(int i=0;i<n1;i++)
	{
		if(i!=n1-1)
		{
			cout << str[i];
			for(int j = 0;j<n2-2;j++)cout << " ";
			cout << str[N-i-1] << "\n";
		}
		else
		{
			for(int j=n1-1;j<n1+n2-1;j++)
			{
				cout << str[j];
			}
		}
	}
}
