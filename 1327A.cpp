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
int solve()
{
	ll n,k;
	cin>>n>>k;
	if(k%2 == 1 and n%2 == 1)
	{
		cout<<"Yes"<<endl;
	}
	else if(k%2 == 0 and n%2 == 0)
	{
		cout<<"Yes"<<endl;
	}
	else if(k%2 == 1 and n%2 == 0)
	{
		cout<<"No"<<endl;
	}
	else 
	{
		cout<<"No"<<endl;
	}
	return 0;
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