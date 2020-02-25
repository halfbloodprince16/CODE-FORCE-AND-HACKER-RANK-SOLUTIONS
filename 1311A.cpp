#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
vector<int>::iterator itr;
priority_queue<int>pq;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
void solve()
{
	int a,b;
	cin>>a>>b;
	int diff = abs(a-b);
	if(diff == 0){cout<<"0"<<endl; return;}

	if(a>b)
	{
		if(diff%2==0)
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"2"<<endl;
		}
	}
	else
	{
		if(diff%2==0)
		{
			cout<<"2"<<endl;
		}
		else
		{
			cout<<"1"<<endl;
		}
	}
	return;
}

int main(int argc, char const *argv[])
{
	fast;
	int t;
	cin>>t;

	while(t--)
	{
		solve();
	}
	return 0;
}