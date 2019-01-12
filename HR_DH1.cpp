#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
std::map<string,int> a;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j;
	string s;
	ll hash[101]={};
	
	cin>>n>>k;
	int x = k;
	while(n>0)
	{
		cin>>s;
		a[s]++;
		n--;
	}
	while(k>0)
	{
		cin>>s;
		if(a[s] >= 1)
		{
			a[s]--;
		}
		else
		{
			return cout<<"No",0;
		}
		k--;
	}
	return cout<<"Yes",0;
}