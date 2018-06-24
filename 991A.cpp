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
	if(a-c<0){return cout<<"-1",0;}
	if(b-c<0){return cout<<"-1",0;}
	if(a+b-c<0){return cout<<"-1",0;}
	if(n-(a+b-c)<=0){return cout<<"-1",0;}

	return cout<<n-(a+b-c),0;
}