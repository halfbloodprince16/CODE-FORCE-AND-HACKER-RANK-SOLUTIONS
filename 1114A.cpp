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
	ll x,y,z,g,p,b;
	ll m=0;
	cin>>x>>y>>z;
	cin>>g>>p>>b;

	if(x<=g)
	{
		m = g-x;
		p = m+p;
		if(y <= p)
		{
			m = p-y;
			b = m+b;
			if(z <= b)
			{
				return cout<<"YES", 0;
			}
			else
			{
				return cout<<"NO", 0;			
			}
		}
		else
		{
			return cout<<"NO", 0;
		}
	}
	return cout<<"NO", 0;
	
}

