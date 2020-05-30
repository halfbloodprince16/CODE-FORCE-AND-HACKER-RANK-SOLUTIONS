#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>w;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/

void solve()
{
	int n;
	cin>>n;
	int x[n];
	vector<int>v;
	memset(x,0,sizeof(x));
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	sort(x,x+n);
	for(int i=0;i<n-1;i++)
	{
		v.push_back(abs(x[i]-x[i+1]));
	}

	cout<<*min_element(v.begin(),v.end())<<endl;
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