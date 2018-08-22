#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<ll>v;
vector<ll>::iterator itr;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int subset(ll x[],ll n,float k)
{
	int i,j,cnt=0;
	float sum=0;
	sort(x,x+n);
	float y[n];
	for(i=0;i<n;i++)
	{
		sum += x[i];
		y[i] = sum/(i+1);
	}
	/*for(i=0;i<n;i++)
	{
		cout<<y[i];
	}*/
	for(i=0;i<n;i++)
	{
		if(k > y[i])
		{
			cnt++;
		}
		else
		{
			break;
		}
	}
	return cnt;
}

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
	}
	ll q,ans=0;
	cin>>q;
	ll qq = q;
	while(q>0)
	{
		cin>>k;
		ans = subset(x,n,k);
		v.push_back(ans);
		q--;
	}
	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<*itr<<endl;
	}
	return 0;
}