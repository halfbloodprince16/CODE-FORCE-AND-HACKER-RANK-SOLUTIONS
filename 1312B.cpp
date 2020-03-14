#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>v;
vector<int>u;
vector<int>w;
vector<int>::iterator it;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
void solve()
{
	int n;
	cin>>n;
	int x[n];

	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}

	sort(x,x+n,std::greater<>());

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