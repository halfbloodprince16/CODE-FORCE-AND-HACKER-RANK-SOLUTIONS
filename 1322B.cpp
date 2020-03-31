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
	std::map<int,int>m;
	std::map<int,int>::iterator it;

	int n;
	cin>>n;
	int x[n];
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	int gc=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
				gc = __gcd(x[i],x[j]);
				if(gc > 1)
					m[gc]++;
		}
	}

	for(it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

//	cout<<__gcd(437,779);
	while(t--)
	{
		solve();
	}

	return 0;
}