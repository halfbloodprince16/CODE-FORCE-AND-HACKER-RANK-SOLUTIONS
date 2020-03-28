#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>u;
vector<int>w;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/

int main(int argc, char const *argv[])
{
	ll n,k;
	cin>>n>>k;
	ll lec[n], wake[n];
	memset(lec,0,sizeof(lec));
	memset(wake,0,sizeof(wake));

	for(int i=0;i<n;i++)
	{
		cin>>lec[i];
	}
	ll sm=0;
	ll tot=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>wake[i];
		if(wake[i] == 1)
		{
			sm += lec[i];
		}
	}
	ll l = 0,r=k-1;
	ll tem=0;

	for(int i=l;i<=r;i++)
	{
		if(wake[i] == 0)
		{
			tem+= lec[i];
		}
	}	
	sm += tem;
	tot = max(tot,sm);
	
	for(int i=r+1;i<n;i++)
	{
		if(wake[i] == 0)
		{
			sm += lec[i];
		}
		if(wake[i-k] == 0)
		{
			sm -= lec[i-k];
		}

		tot = max(tot,sm);
	}

	
	cout<<tot;

	return 0;
}