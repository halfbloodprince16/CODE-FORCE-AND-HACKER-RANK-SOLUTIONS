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
	int a,b;
	cin>>a>>b;
	int x,y;
	x = max(a,b);
	y = 2*min(a,b);
	int diff= abs(x-y);
	if(x>y)
		y += diff;
	else if(x<y)
		x += diff;
	cout<<x*y<<endl;

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