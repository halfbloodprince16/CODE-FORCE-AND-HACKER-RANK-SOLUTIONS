#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>u;
vector<int>w;
vector<int>::iterator it;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
void solve()
{
	ll x,y,a,b;
	cin>>x>>y>>a>>b;

	ll n = (x-a-y-b)/(-b-a);
	//cout<<n;
	if((x-a-y-b)%(-b-a) == 0)
	{
		cout<<n-1<<endl;
	}
	else
		cout<<"-1"<<endl;

	return;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		solve();
	}
	return 0;
}