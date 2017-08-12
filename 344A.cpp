#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,a,b,c,count = 0,flag = 0,cnt1 = 0,cnt2 = 0;
	cin>>a;
	int x[a][2];
	
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < 2 ; j++)
		{
			cin>>x[i][j];
		}
	}
	
	for(i = 0 ; i < a ; i++)
	{
	//	for(j = 0 ; j < 2 ; j++)
		
			if(x[i][1] != x[i+1][0])
			{
				cnt1++;
			}
			else
			{
				cnt2++;
			}
	}
	cout<<cnt1<<cnt2;
	
	return 0;
}
