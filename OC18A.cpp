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
	ll i,j;
	string s;
	ll hash[101]={};
	int x,a,b,y,m;
	cin>>x>>a>>b>>y>>m;
	int l = (a-b);
	cout<<(l*x+(m-l)*y);
	return 0;
}