#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
vector<ll>v;

int main()
{
	ll n,k;
	cin>>n>>k;
	ll x[n],i,j;
	ll cnt=0;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	sort(x,x+n);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(x[j]-x[i] <= k)
			{
				cnt++;
			}
		}
		v.push_back(n-cnt);
		cnt=0;
	}
	cout<<*min_element(v.begin(),v.end());

	return 0;
}