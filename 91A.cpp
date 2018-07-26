#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;

const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j;
	string s;
	ll hash[101]={};
	ll r,g,b,m;
	cin>>r>>g>>b;
	r = ceil(r/2.0)-1;
	g = ceil(g/2.0)-1;
	b = ceil(b/2.0)-1;
	cout<<(max(r*3,max(g*3+1,b*3+2))+30);
	
	return 0;
}