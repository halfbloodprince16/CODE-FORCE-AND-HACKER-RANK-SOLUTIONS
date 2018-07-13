#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m={};
std::map<int,int> ::iterator itr;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j;
	string s;
	ll hash[101]={};
	
	cin>>n;
	ll x[n];
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		m[x[i]]++;
	}
	sort(x,x+n,greater<int>());

	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(x[i] > x[j] && m[x[j]] >0)
			{
				m[x[j]]--;
				break;
			}
		}
	}
	ll ans=0;
	for(itr=m.begin();itr!=m.end();itr++)
	{
		ans += itr->second;
	}
	cout<<n-ans;
	return 0;
}