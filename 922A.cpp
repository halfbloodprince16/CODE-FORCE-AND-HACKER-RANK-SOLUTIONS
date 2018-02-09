#include"bits/stdc++.h"
using namespace std;
typedef long long ll;

int main()
{
	ll x,y;
	cin>>x>>y;
	ll copy=0,org=1;
	if(x == 0 && y == 1)
	{
		cout<<"YES";
		return 0;
	}
	if(x == 0 && y == 0 || y == 0)
	{
		cout<<"NO";
		return 0;
	}
	if(x == 2 && y == 1)
	{
		cout<<"NO";
		return 0;
	}
	if (y == 1 && (x-y)%2 != 0)
	{
		cout<<"NO";
		return 0;
	}
	int i,j;
	
	for(i = 0 ; i < y-1 ; i++)
	{
		org += 1;
		copy += 1;
	}
	if((x-copy)%2 == 0 && x-copy >= 0 )
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
