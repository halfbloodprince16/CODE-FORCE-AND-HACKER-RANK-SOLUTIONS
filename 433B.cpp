#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>v;
vector<int>u;
vector<int>::iterator it;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	freopen("input.in","r",stdin);
	#endif
 
	ios_base::sync_with_stdio(false);
	fast;
	ll n;
	cin>>n;
	v.push_back(0);
	int x[100003];
	int mod[100003];
	memset(x,0,sizeof(x));
	memset(mod,0,sizeof(mod));

	x[0] = 0;
	mod[0] = 0;

	int a;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		v.push_back(a);
	}

	for(int i=1;i<=n;i++)
	{
		x[i] = x[i-1] + v[i];
	}
	sort(v.begin(),v.end());

	for(int i=1;i<=n;i++)
	{
		mod[i] = mod[i-1]+v[i];
	}

	int k;
	cin>>k;

	while(k--)
	{
		int l,r,q;
		cin>>q>>l>>r;
		if(q==1)
		{
			cout<<(x[r]-x[l-1])<<endl;
		}
		else
		{
			cout<<(mod[r]-mod[l-1])<<endl;
		}
	} 

	return 0;
}