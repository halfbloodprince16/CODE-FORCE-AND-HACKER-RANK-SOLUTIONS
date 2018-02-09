#include"bits/stdc++.h"
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int x[n];
	int i,j;
	for(i = 0 ; i < n ; i++)
	{
		cin>>x[i];
	}
	
	int sum = 0,cnt = 0;
	for(i = 0 ; i < n ; i++)
	{
		for(j = i+1 ; j < n ; j++)
		{
			if((x[i]+x[j])%k == 0)
			{
				cnt++;
			}
		}
		
	}

	cout<<cnt;
	return 0;
}