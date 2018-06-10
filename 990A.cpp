#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
//const int N=1e18+1;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	ll n,m,a,b;
	ll i,j;
	cin>>n>>m>>a>>b;
	ll c = n%m;
	ll d = m-c;

	cout<<min(d*a,c*b);
	return 0;
}