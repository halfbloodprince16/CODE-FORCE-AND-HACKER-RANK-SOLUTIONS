#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>u;
vector<int>w;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/

void solve()
{
	ll a,b,c,d;
	ll x,y,x1,y1,x2,y2;

	cin>>a>>b>>c>>d;
	cin>>x>>y>>x1>>y1>>x2>>y2;

	ll totx = abs(x1-x2);
	ll toty = abs(y1-y2);

	if(x == y and x == x1 and x == x2 and x == y1 and x == y2 and a+b+c+d>0)
	{
		cout<<"No"<<endl;
		return;
	}

	if(abs(a-b) <= totx and abs(c-d) <= toty)
	{
		cout<<"Yes"<<endl;
		return;
	}
	cout<<"No"<<endl;
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