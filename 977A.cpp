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
	ll n,k;
	cin>>n>>k;
	ll cnt=0,ans;
	while(k)
	{
		if(n%10==0)
		{
			n /= 10;
		}
		else
		{
			n -= 1;
		}
		k--;
	}
	cout<<n;
	return 0;
}