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
	ll n,m,i,j,a,b;
	string s;
	ll hash[101]={};
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>a>>b;
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			s+="1";
		}
		else if(i%2==1)
		{
			s+="0";
		}
	}
	cout<<s;
	return 0;
}