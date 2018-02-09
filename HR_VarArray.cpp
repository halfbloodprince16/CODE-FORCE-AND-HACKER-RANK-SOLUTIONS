#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define max 1000
int main()
{
	int n,q;
	cin>>n>>q;
	int i,j;
	int size;
	int x[max][max];
	
	for(i = 0 ; i < n ; i++)
	{
		cin>>size;
		x[i][size];
		for(j = 0 ; j < size ; j++)
		{
			cin>>x[i][j];
		}
	}
	int query = 2*q;
	int arr[query];
	for(i = 0 ; i < query ; i++)
	{
		cin>>arr[i];
	}
	
	for(i = 0 ; i < query ; i+=2)
	{
		cout<<x[arr[i]][arr[i+1]]<<"\n";
	}
	
	return 0;
}
