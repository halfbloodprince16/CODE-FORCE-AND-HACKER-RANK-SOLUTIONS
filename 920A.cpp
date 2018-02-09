#include"bits/stdc++.h"
using namespace std;
#define max 200001

typedef long long ll;
int main()
{
	vector<ll>v;
	ll i,j,k;
	ll x[max];
	ll n;
	cin>>n;
	
	for(i = 0 ; i < n ; i++)
	{
		cin>>x[i];
	}
	string s;
	cin>>s;
	ll temp;
	for(i = 0,k = 0  ;i < n,k < s.length() ; i++,k++)
	{
		for(j = i+1 ; j < n ; j++)
		{
			if(x[i] > x[j] && s[i] == '1')
			{
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
	
	for(i = 0 ; i < n ; i++)
	{
		if(x[i] == i+1)
		{
			continue;
		}
		else
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
