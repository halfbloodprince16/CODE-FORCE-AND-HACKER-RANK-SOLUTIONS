#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<string>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m1,m2;
std::map<int,int>::iterator it,ir;
const int N=1e6+10;
int flg=0;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	ll n,m;
	cin>>n;
	ll i,j,a,b,ans=0;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		m1.insert(pair<int,int>(a,b));
	}
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>a>>b;
		if(m1[a] < b)
		{
			m1[a] = b;
			continue;
		}
		m1.insert(pair<int,int>(a,b));
		
	}

	for(it=m1.begin();it!=m1.end();it++)
	{
		ans += it->second;
	}
	cout<<ans;
	return 0;
}