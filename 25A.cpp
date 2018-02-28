#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main()
{
	int n,haha,i;
	cin>>n;
	int x[n];
	int hash[2]={};
	for(i=1;i<=n;i++)
	{
		cin>>x[i];
		hash[x[i]%2]++;
	}
	if(hash[0]<hash[1])
	{
		for(i=1;i<=n;i++)
		{
			if(x[i]%2==0)
			{
				cout<<i;
				return 0;
			}
		}
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			if(x[i]%2==1)
			{
				cout<<i;
				return 0;
			}
		}
	}
	

	return 0;
}