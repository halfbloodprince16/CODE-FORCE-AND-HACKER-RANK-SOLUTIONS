#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
vector<int>v;

int main()
{
	double x,y;
	int i,j;
	cin>>x>>y;
	double dist;
	//quad 1
	
	if(x>=0&&y>=0 || x<=0&&y<=0)
	{
		dist = pow(x*x+y*y,0.5);
		if(floor(dist) == dist)
		{
			cout<<"black";
			return 0;
		}
		else if(int(dist)%2==0)
		{
			cout<<"black";
			return 0;
		}
		else
		{
			cout<<"white";
			return 0;
		}
	}
	if(x>=0&&y<=0||x<=0&&y>=0)
	{
		dist = pow(x*x+y*y,0.5);
		if(floor(dist) == dist)
		{
			cout<<"black";
			return 0;
		}
		else if(int(dist)%2==0)
		{
			cout<<"white";
			return 0;
		}
		else
		{
			cout<<"black";
			return 0;
		}
	}
	return 0;
}