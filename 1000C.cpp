#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<pair<int,int>>v;
vector<pair<int,int>>::iterator itr;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j;
	string s;
	ll hash[101]={};
	
	cin>>n;
	ll a,b;
	ll minn=0,maxx=0;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		if(i==0)
		{
			minn = a;
			maxx= b;
		}
		else
		{
			minn = min(a,minn);
			maxx = max(b,maxx);
		}
		
		v.push_back(make_pair(a,b));
	}
	//cout<<minn<<maxx;
	for(i=minn;i<=maxx;i++)
	{
		for(itr=v.begin();itr!=v.end();itr++)
		{
			if(i >= itr->first && i<= itr->second)
			{
				hash[i]++;
			}
		}
	}
	ll x=0,y=0,z=0;
	for(i=minn;i<=maxx;i++)
	{
		if(hash[i] == 1)
		{
			x++;
		}
		else if(hash[i] == 2)
		{
			y++;
		}
		else if(hash[i] == 3)
		{
			z++;
		}
	}
	cout<<x<<" "<<y<<" "<<z;
	return 0;
}