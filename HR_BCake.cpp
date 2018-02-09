#include"bits/stdc++.h"
using namespace std;

int main()
{
	int n,d,m;
	cin>>n;
	int x[n];
	int i,j;
	for(i = 0 ; i < n ; i++)
	{
		cin>>x[i];
	}
	cin>>d>>m;
	int sum = 0,cnt = 0;
	for(i = 0 ; i < n ; i++)
	{
		for(j = i ; j < m+i ; j++)
		{
			sum = sum + x[j];
		}
		if(sum == d)
		{
			cnt++;
		}
		sum = 0;
	}

	cout<<cnt;
	return 0;
}