#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>u;
vector<int>w;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int x[n];

	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	int q,a,b;
	int add=0;
	while(m--)
	{
		cin>>q;
		if(q == 1)
		{
			cin>>a>>b;
			x[a-1] = b-add;
		}
		else if(q == 2)
		{
			cin>>a;
			add += a;
		}
		else
		{
			cin>>a;
			cout<<x[a-1]+add<<endl;
		}
	}

	return 0;
}