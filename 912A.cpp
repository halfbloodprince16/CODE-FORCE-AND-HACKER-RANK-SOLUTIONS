#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,x,y,z;
	int ans;
	cin>>a>>b>>x>>y>>z;
	
	a = a-2*x;
	a = a-1*y;
	b = b-1*y;
	b = b-3*z;
	
	ans = a+b;
	if(ans < 0)
	{
		if(ans == -2147483648)
		{
			cout<<"2147483648";
			return 0;
		}
		cout<<-ans;
	}
	else if(ans >=0)
	{
		cout<<"0";
	}
	return 0;
}
