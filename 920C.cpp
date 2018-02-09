#include"bits/stdc++.h"
using namespace std;
#define max 200001

typedef unsigned long long int ll;

int main()
{
	vector<unsigned long long int>x;
	ll i,j,k;
	ll haha;
	ll n;
	cin>>n;
	
	for(i = 0 ; i < n ; i++)
	{
		cin>>haha;
		x.push_back(haha);
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
