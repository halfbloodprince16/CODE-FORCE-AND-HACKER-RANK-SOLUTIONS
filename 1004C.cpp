#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<pair<int,int>>v;
std::vector<pair<int,int>> ::iterator itr,it;
vector<string>u;
priority_queue<int>pq;
std::multimap<int,int> m;

const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j;
	string s,ss;
	ll hash[101]={};
	cin>>n;
	char x[n];
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	ll flg=0,fl2=n-1,cnt=0;

	for(i=0;i<n;i++)
	{
		s = s+char(x[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			
			u.push_back(s[i]+s[j]);
		}
	}
	
	for(i=0;i<u.size();i++)
	{
		cout<<u[i]<<endl;
	}
	return 0;
}