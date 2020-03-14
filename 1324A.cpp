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

	for(int i=1;i<n;i++)
	{
		int df = abs(x[i]-x[i-1]);
		if(df%2 != 0)
		{
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;

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