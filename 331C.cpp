#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>u;
vector<int>w;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/

int main(int argc, char const *argv[])
{
	ll n;
	cin>>n;
	ll cnt=0;

	while(n > 0)
	{
		//cout<<"hi";
		ll m = n;
		ll mx = 0;

		while(m != 0)
		{
			//cout<<"hey";
			mx = max(mx,m%10);
			m = m/10;
		}

		n = n-mx;
		cnt++;
	}

	cout<<cnt;

	return 0;
}