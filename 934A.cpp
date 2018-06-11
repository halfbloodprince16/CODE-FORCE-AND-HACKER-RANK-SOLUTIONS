#include"bits/stdc++.h"
using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
	ll n,m;
	cin>>n>>m;
	ll x[n],y[m];
	ll i,j;

	for (ll i = 0; i < n; ++i)
	{
		cin>>x[i];
	}
	for (ll i = 0; i < m; ++i)
	{
		cin>>y[i];
	}

	sort(x,x+n);sort(y,y+m);

	cout<<x[n-2]*y[m-1];
	return 0;
}