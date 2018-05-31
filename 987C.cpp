#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<pair<int,int>>v;
vector<pair<int,int>>u;
priority_queue<int>pq;
std::map<int,int> m1,m2;
std::vector<pair<int,int>>::iterator it,ir;
const int N=1e6+10;
int flg=0;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	ll n,i,j;
	cin>>n;
	ll a,b;
	ll x[n],y[n];
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>y[i];
	}
	for(i=0;i<n;i++)
	{
		v.push_back(make_pair(x[i],y[i]));
	}
	sort(v.begin(),v.end());
	for(it=v.begin();it!=v.end()-1;it++)
	{
		for(ir=it+1;ir!=v.end();ir++)
		{
			if(it->first == ir->first)
			{
				//it->second = 0;
				if(it->second>=ir->second)
				{
					it->second = 0;
				}
				else
					ir->second = 0;
				//cout<<"hi";
			}
		}
	}
	
	for(it=v.begin();it!=v.end();it++)
	{
		if(it->second != 0)
		{
			u.push_back(make_pair(it->second,it->first));
		}
	}
	for(it=u.begin();it!=u.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	ll ans=0;
	

	return 0;
}