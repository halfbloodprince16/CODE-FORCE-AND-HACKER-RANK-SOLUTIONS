#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,a,b,c,diff1 = 0,diff2 = 0;
	int x[5][5];
	
	for(i = 0 ; i < 5 ; i++)
	{
		for(j = 0 ; j < 5 ; j++)
		{
			cin>>x[i][j];		
		}
		
	}
	
	for(i = 0 ; i < 5 ; i++)
	{
		for(j = 0 ; j < 5 ; j++)
		{
			if(x[i][j] == 1)
			{
				diff1 = 2- i;
				diff2 = 2 - j;
				break;
			}		
		}
		
	}
	if(diff1 < 0)
	{
		diff1 = -(diff1);
	}
	if(diff2 < 0)
	{
		diff2 = -(diff2);
	}
	int ans = 0;
	ans = diff1+diff2;
	cout<<ans;
	return 0;
}
