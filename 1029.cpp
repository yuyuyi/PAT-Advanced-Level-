#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<vector>
#include<queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	vector<long long> vec;
	long long k,n;
	for(int i=0;i<2;i++)
	{
		cin >>n;
		for(int j =0;j<n;j++)
		{
			cin >> k;
			vec.push_back(k);
		}
	}
	
	long long lon=vec.size();
	sort(vec.begin(),vec.end());
	
	if(lon%2==1)
	cout << vec[lon/2];
	else
	cout << vec[lon/2-1];

}
