#include"bits/stdc++.h"
using namespace std;
#define lar 1e10+1

bool all_minus_one(int arr[],int m)
{
	for(int i=0;i<m;i++)
	{
		if(arr[i] > 0)
		{
			return false;
		}
	}
	return true;
}

int find_min_id(int arr[],int m)
{
	sort(arr,arr+m);
	for(int i=1;i<m;i++)
	{
		if(arr[i-1] == -1 and arr[i] != -1)
		{
			return i+1;
		}
	}
}

int main(int argc, char const *argv[])
{
	int m;
	cin>>m;
	int x[m];
	memset(x,0,sizeof(x));

	for(int i=0;i<m;i++)
	{
		cin>>x[i];
	}
	
	int corr_x[m];
	memset(corr_x,-1,sizeof(corr_x));

	for(int i=1;i<m-1;i++)
	{
		if(x[i] < x[i-1] and x[i] < x[i+1])
		{
			corr_x[i] = x[i];
		}
	}

	while(all_minus_one(corr_x,m) != true)
	{
		int temp[m];
		std::copy(corr_x, corr_x+m, temp);
		int id = find_min_id(temp,m);
		cout<<id<<endl;

		int mn = min(x[id-1],x[id+1]);
		if(mn == x[id-1])
		{
			x[id-1] -= abs(x[id-1] - x[id]); 
		}
		else
		{
			x[id+1] -= abs(x[id+1] - x[id]);
		}
		
		corr_x[id] = -1;

		for(int i=0;i<m;i++)
		{
			cout<<x[i]<<" ";
		}
		cout<<endl;

		for(int i=0;i<m;i++)
		{
			cout<<corr_x[i]<<" ";
		}
	}

	cout<<endl;
	return 0;
}


/*
8
4 3 5 2 7 8 1 6
*/