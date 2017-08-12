#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,i,j,k,m,flag1=0,flag2 = 1;
	cin>>a>>m;
	for(i = 0 ; i < a ; ++i)
	{
		cin>>c;
		if(c == flag1)
		{
			flag2 = flag2+1;
			
		}
		else
		{
			flag2 = 1;
		}
		flag1 = c;
	}
	if(flag2 + k > a)
	{
		cout<<a-flag2;
	}
	else
	cout<<"-1";
	return 0;
}
