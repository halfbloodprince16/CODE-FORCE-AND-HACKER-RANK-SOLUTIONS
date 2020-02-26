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
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return;
}

bool retain_cond(int x[],int m)
{

}

bool is_sorted(int x[],int m)
{
	for(int i=1;i<m;i++)
	{
		if(x[i] < x[i-1])
		{
			return false;
		}
	}
	return true;
}

string perform_check(int x[],int y[],int temp[],int m,int n)
{
	if(is_sorted(x,m) == true)
	{
		return "YES";
	}
	int cnt=0;
	while(cnt<=200)
	{
		for(int i=0;i<n;i++)
		{
			if(x[y[i]-1] > x[y[i]])
				swap(x[y[i]-1],x[y[i]]);
			if(is_sorted(x,m) == true)
			{
				return "YES";
			}
			//print(x,m);
		}
		cnt++;
	}
	return "NO";
}

void solve()
{
	int m,n;
	cin>>m>>n;
	int x[m],y[n],temp[m];

	for(int i=0;i<m;i++)
	{
		cin>>x[i];
		temp[i] = x[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>y[i];
	}

	cout<<perform_check(x,y,temp,m,n)<<endl;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		solve();
	}
	return 0;
}