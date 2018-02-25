#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
const int N = 1e6 + 5;
vector<ll>v;
vector<ll>::iterator vi;


int main()
{
	ll p,y;
	ll i,j,cnt=0;
	cin>>p>>y;
	for(i=p+1;i<=y;i++)
	{
		v.push_back(i);
	}
	for(i=2;i<=p;i++)
	{
		for(j=0;j<v.size();j++)
		{
			if(v[j]%i==0)
			{
				v[j] = 0;
			}
		}
	}
	if(*max_element(v.begin(),v.end())==0||v.empty()==true)
	{
		cout<<"-1";
	}
	else
	{
		cout<<*max_element(v.begin(),v.end());
	}
	return 0;
}