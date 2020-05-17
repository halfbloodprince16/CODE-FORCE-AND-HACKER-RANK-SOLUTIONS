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
	memset(x,0,sizeof(x));

	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	int a = n;
	int b=-1;

	for(int i=0;i<n;i++)
	{
		if(!(x[i] >= i))
		{
			a = i;
			break;
		}
	}

	for(int i=n-1;i>=0;i--)
	{
		if(!(x[i] >= n-1-i))
		{
			b=i;
			break;
		}
	}

	(b+1<=a-1)?cout<<"Yes":cout<<"No";

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
