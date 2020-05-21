#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

struct student
{
	string id;
	string name;
	int sco;
};

bool mys1(student st1,student st2)
{
	return st1.id < st2.id;
}

bool mys2(student st1,student st2)
{
	if(st1.name != st2.name)return st1.name < st2.name;
	else return st1.id < st2.id;
}

bool mys3(student st1,student st2)
{
	if(st1.sco != st2.sco)return st1.sco < st2.sco;
	else return st1.id < st2.id;
}

int main()
{
	int n,m;
	
	cin >> n >> m;
	
	vector<student>vec;
	
	for(int i=0;i<n;i++)
	{
		student st;
		cin >> st.id >> st.name >> st.sco;
		vec.push_back(st);
	}
	
	switch(m)
	{
		case 1:sort(vec.begin(),vec.end(),mys1);break;
		case 2:sort(vec.begin(),vec.end(),mys2);break;
		case 3:sort(vec.begin(),vec.end(),mys3);break;
		default:break;
	}
	
	for(int i=0;i<vec.size();i++)
	{

		cout << vec[i].id << " " << vec[i].name << " " << vec[i].sco << endl;
	}
}
 
