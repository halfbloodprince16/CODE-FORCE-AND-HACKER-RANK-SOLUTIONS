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
	cin>>n;
	ll x[5]={100,20,10,5,1};
	ll cnt=0;
	while(n>0)
	{
		for(i=0;i<5;i++)
		{
			if(x[i] <= n)
			{
				n-=x[i];
				cnt++;
				break;
			}
		}
	}
	cout<<cnt;
	return 0;
}