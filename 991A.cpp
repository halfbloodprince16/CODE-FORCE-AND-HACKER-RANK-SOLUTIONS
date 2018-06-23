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
	ll n,k,a,b,c,i,j;
	string s;
	ll hash[101]={};
	cin>>a>>b>>c>>n;
	int ans = (a+b-c);
	if(ans < 0){return cout<<"-1",0;}
	ans = n-ans;
	if(ans<=0){return cout<<"-1",0;}
	return cout<<ans,0;
	
}