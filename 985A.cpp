#include"bits/stdc++.h"
#include"string.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<ll>v;
vector<ll>::iterator itr;
vector<ll>u;
vector<ll>w;
priority_queue<int>pq;
const int N=1e6+10;
/*globals*/
ll n,m,i,j,k;
//string s,str;

std::stack<int>s;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	cin>>n;
	m=n/2;
	ll x[n];
	ll ehash[100]={},ohash[100]={};
	for(i=0;i<m;i++)
	{
		cin>>x[i];
		if(x[i]%2==0)
		{
			ehash[x[i]]++;
		}
		else
		{
			ohash[x[i]]++;
		}
	}
	sort(x,x+m);
	ll odd=0,even=0,val=0,eid=0,oid=0;
	for(i=0;i<m;i++)
	{
		if(x[i]%2==1)
		{
			x[i]=0;
			eid=i;
		}	
	}
	for(i=0;i<m;i++)
	{
		if(x[i]!=0)
		{
			eid+=2;
			val = abs(eid-x[i]);
			odd += val;
		}
	}
	for(i=0;i<m;i++)
	{
		if(x[i]%2==0)
		{
			x[i]=0;
			eid=i;
		}	
	}
	for(i=0;i<m;i++)
	{
		if(x[i]!=0)
		{
			eid+=2;
			val = abs(eid-x[i]);
			even += val;
		}
	}
	cout<<odd<<even;
	return 0;
}