#include"bits/stdc++.h"
#include"string.h"
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
	ll n,k;
	cin>>n>>k;
	ll x[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	sort(x,x+n);
	if(k==0)
	{
		cout<<x[k];
		return 0;
	}
	ll c = x[k-1];
	if(c == x[k])
	{
		cout<<"-1";
	}
	else
	{
		cout<<x[k-1];
	}
	return 0;
}