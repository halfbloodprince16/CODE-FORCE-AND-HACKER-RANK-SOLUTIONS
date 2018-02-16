#include"bits/stdc++.h"
using namespace std;

int main()
{
	int n,k,q;
	cin>>n>>k>>q;

	int i,j;
	int x[n];

	for(i = 0 ; i < n ; i++)
	{
		cin>>x[i];
	}

	int y[q];
	for(i = 0 ; i < q ; i++)
	{
		cin>>y[i];
	}

	int last=0;
	for(i = 0 ; i < 2 ; i++)
	{
		for(j = n-2 ; j >= 0 ; j--)
		{
			swap(x[j+1],x[j]);
		}
	}

	for(i = 0 ; i < q ; i++)
	{
		cout<<x[y[i]]<<endl;
	}
	return 0;
}