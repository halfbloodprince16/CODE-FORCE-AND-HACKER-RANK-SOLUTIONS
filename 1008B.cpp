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
	ll n,k,i,j,a,b;
	string s;
	ll hash[101]={};
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	ll mx=0;
	itr = v.begin();
	mx = max(itr->first,itr->second);
	ll f1=0,f2=0;
	for(itr=v.begin();itr!=v.end();itr++)
	{
		if(itr->first <= mx && itr->second <= mx)
		{
			mx = max(itr->first,itr->second);
		}
		else if(itr->first <= mx)
		{
			mx = itr->first;
		}
		else if(itr->second <= mx)
		{
			mx = itr->second;
		}
		else
		{
			return cout<<"NO",0;
		}
	}
	cout<<"YES";
	return 0;
}