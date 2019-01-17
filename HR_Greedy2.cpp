#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<pair<int,int>>v;
vector<pair<int,int>>::iterator itr;
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
	cin>>n>>k;
	ll a,b,cnt=0,sum=0,m=n;
	while(n>0)
	{
		cin>>a>>b;
		v.push_back(make_pair(a,b));
		sum += a;
		if(b==1){cnt++;}
		n--;
	}
	sort(v.begin(),v.end());
	ll lp = cnt-k;
	for(i=0;i<m,lp>0;i++)
	{
		sum = sum - 2*v[i].first;
		lp--;
		//cout<<v[i].first;
	}
	cout<<sum;

	return 0;
}