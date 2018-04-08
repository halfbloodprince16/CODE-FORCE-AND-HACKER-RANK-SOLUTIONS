#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
vector<int>w;
vector<int>::iterator itr;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	int n,k1,k2;
	int x[n],y[n];
	int i,j;
	int s1=0,s2=0;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		s1 = s1 + x[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>y[i];
		s2 = s2 + y[i];
	}
	int mid = (s1+s2)/2;
	if(s1 < mid)
	{
		s1 = s1 + k1;
	}
	else
	{
		s1 = s1 - k1;
	}
	if(s2 < mid)
	{
		s2 = s2 + k2;
	}
	else
	{
		s2 = s2 - k2;
	}
	int ans = s1-s2;
	if(ans < 0)
	{
		ans = -ans;
	}
	cout<<ans;
	return 0;
}