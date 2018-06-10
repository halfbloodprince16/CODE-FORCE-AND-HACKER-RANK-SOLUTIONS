#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<string>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
//const int N=1e18+1;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	ll n,k;
	fast;
	cin>>n>>k;
	ll i,j;
	ll x[n];
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	ll cnt=0;
	sort(x,x+n);
	for (i = 0; i<n-1 ; i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(x[j]-x[i] == k)
			{
				cnt++;
				break;
			}
		}
	}
	cout<<n-cnt;
	return 0;
}