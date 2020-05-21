#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<vector>

using namespace std;

int main()
{
	float num[3][3];
	int win[3];
	
	float sum = 1;
	
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			cin >>num[i][j];
			
	for(int i=0;i<3;i++)
	{
		float max=num[i][0];
		win[i]=0;
		for(int j=1;j<3;j++)
		{
			if(max < num[i][j])
			{
				max = num[i][j];
				win[i]=j;
			}
		}
		sum *= max;
	}
	
	for(int i=0;i<3;i++)
	{
		switch(win[i])
		{
			case 0:cout << "W ";break;
			case 1:cout << "T ";break;
			case 2:cout << "L ";break;
			default:break;
		}
	}
	
	sum = (sum*0.65 -1)*2;
	
	printf("%.2f",sum);
}
