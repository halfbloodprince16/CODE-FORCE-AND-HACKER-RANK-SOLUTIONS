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
	string s;
	ll hash[101]={};
	cin>>n;
	ll x[n],sum=0;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		sum += x[i];
	}
	if(n==1){return cout<<"-1", 0;}
	if(n==2&&x[0]==x[1]){return cout<<"-1", 0;}
	
	ll cnt=0;
	if(sum-x[0] != x[0])
	{
		return cout<<"1"<<endl<<"1",0;
	}
	else
	{
		return cout<<"2"<<endl<<"1 2",0;
	}
	
	return 0;
}