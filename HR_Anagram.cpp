#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j;
	string a,b;
	ll hash[101]={};
	cin>>a>>b;

	ll x[26]={},y[26]={};
	for(i=0;i<a.length();i++)
	{
		x[int(a[i])-97]++;
	}
	for(i=0;i<b.length();i++)
	{
		y[int(b[i])-97]++;
	}
	ll cnt=0;

	for(i=0;i<26;i++)
	{
		if(x[i] != y[i])
		{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}