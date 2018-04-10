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
	ll n;
	cin>>n;
	ll x[n];
	ll i,j;
	double sum =0;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		sum = sum + x[i];
	}
	double s=0;
	for(i=0;i<n;i++)
	{
		s = s+x[i];
		if(s >= sum/2)
		{
			cout<<i+1;
			return 0;
		}
	}
	return 0;
}