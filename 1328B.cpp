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
	int n,k;
	cin>>n>>k;
	k--;
	int curr = 1;
	int a1=n-1;
	int a2 = n;

	while(k >= curr)
	{
		k = k-curr;
		a1--;
		curr++;

		//cout<<"k-"<<k<<"a1-"<<a1<<"curr-"<<curr<<endl;
	}
	while(k!=0)
	{
		a2--;
		k--;

		//cout<<"k-"<<k<<"a2-"<<a2;
	}

	for(int i=1;i<=n;i++)
	{
		if(i != a1 and i != a2)
		{
			cout<<"a";
		}
		else
			cout<<"b";
	}

	cout<<endl;
}

int main(int argc, char const *argv[])
{
	ll a,b;
	int t;
	cin>>t;

	while(t--)
	{
		solve();
	}
	
	return 0;
}