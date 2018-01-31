#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,k;
	int i,j;
	
	cin>>n>>m>>k;
	char x[n][m];
	int cnt = 0;
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < m ; j++)
		{
			cin>>x[i][j];
		}
	}
	
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < m ; j++)
		{
			if(x[i][j] == '.' && x[i][j+1] == '.')
			{
				cnt++;
			}
		}
	}
	
	for(j = 0 ; j < m ; j++)
	{
		for(i = 0 ; i < n ; i++)
		{
		
			if(x[i][j] == '.' && x[i][j+1] == '.')
			{
				cnt++;
			}
		}
	}
	cout<<cnt;
	/*
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < m ; j++)
		{
			cout<<x[i][j]<<" ";
		}
		cout<<"\n";
	}*/
	return 0;
}
