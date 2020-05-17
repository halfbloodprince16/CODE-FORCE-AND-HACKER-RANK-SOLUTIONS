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
	int x[n];
	int l=0,r=n/2,sm1=0,sm2=0;
	int a=2,b=1;

	for(int i=l;i<r;i++)
	{
		x[i] = a;
		sm1 += a;
		a += 2;
	}

	for(int i=r;i<n-1;i++)
	{
		x[i] = b;
		sm2 += b;
		b += 2;
	}

	if(abs(sm1-sm2)%2 == 0)
	{
		cout<<"NO"<<endl;
		return;
	}
	cout<<"YES"<<endl;
	x[n-1] = sm1-sm2;

	for(int i=0;i<n;i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<endl;

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