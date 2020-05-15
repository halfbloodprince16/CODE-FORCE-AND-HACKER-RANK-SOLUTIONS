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
	int n;
	cin>>n;
	ll sm=0;

	for(int i = 0; i < n/2-1; i++)
	{
        sm += (1 << (i+1));
    }
    sm += (1 << n);
    for(int i = n/2-1; i < n-1; i++)
    {
        sm -= (1 << (i+1));
    }
    cout<<abs(sm)<<endl;
}

int main(int argc, char const *argv[])
{
	fast;
	int t;
	cin>>t;

	while(t--)
	{
		solve();
	}
	return 0;
}