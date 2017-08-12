#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,k,a,b,m=0,flag1 = 0,flag2 = 0,flag =0;
	cin>>a;
	int x[a];
	for(i = 0 ; i < a ; i++)
	cin>>x[i];
	
	for(i = 0 ; i < a ; i++)
	{
		for(j = i+1 ; j < a ; j++)
		{
			if(x[i] <= x[j])
			{
				m = i;
				flag1 = 1;
			}
		}
	}
	if(flag1 ==1)
	{
		for(i = m ; i < a ; i++)
		{
			for(j = i+1 ; j < a ; j++)
			{
				if(x[i] >= x[j])
				{
					flag2 = 1;
				}
			}
		}
	}
	
	
			
	if(flag1 == flag2)
	{
		cout<<"YES";
	}
	if(flag1 != flag2)
	cout<<"NO";
}
