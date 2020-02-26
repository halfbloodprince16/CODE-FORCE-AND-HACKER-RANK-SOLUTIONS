#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
vector<int>::iterator itr;
priority_queue<int>pq;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
bool all_are_minus(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i] != -1)
		{
			return false;
		}
	}
	return true;
}

void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return;
}

int find_min_id(int arr[], int n)
{
	int mn=N;
	int id=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] < mn and arr[i] != -1)
		{
			mn = arr[i];
			id = i;
		}
	}

	return id;
}

int main(int argc, char const *argv[])
{
	fast;
	int n;
	cin>>n; 
	int x[n];
	int corr_x[n];
	memset(x,0,sizeof(x));
	memset(corr_x,-1,sizeof(corr_x));
	
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}

	for(int i=1;i<n-1;i++)
	{
		if(x[i] < x[i-1] and x[i] < x[i+1])
		{
			corr_x[i] = x[i];
		}
	}

	while(all_are_minus(corr_x,n) != true)
	{
		int id = find_min_id(corr_x,n);
		//cout<<id;
		int l = x[id-1];
		int r = x[id+1];

		if(l > r)
		{
			x[id+1] = x[id];
		}
		else
		{
			x[id-1] = x[id];
		}
		corr_x[id] = -1;
		
		//print(x,n);
		//print(corr_x,n);
	}
	print(x,n);
	return 0;
}

/*
test case
8
6 5 7 3 2 1 4 5
*/