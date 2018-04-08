#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,m;
	cin>>n>>m;
	ll hash[n+1]={};
	ll i;
	ll haha;
	for(i=1;i<=m ; i++)
	{
		cin>>haha;
		hash[haha]++;
	}
	ll min = hash[1];

	for(i=1;i <= n ; i++)
	{
		if(hash[i] < min)
		{
			min = hash[i];
		}
		else
		{
			continue;
		}
	}
	cout<<min;
	return 0;
}