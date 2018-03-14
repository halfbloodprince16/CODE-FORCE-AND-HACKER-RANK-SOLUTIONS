#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<string>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main()
{
	fast;
	int a,b,i,j;
	cin>>a>>b;
	char x[a][b];
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cin>>x[i][j];
		}
	}
	int m=0,n=0,o=0,p=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			if(x[i][j] == '*')
			{
				m=i;
				n=j;
				break;
			}
		}
	}
	for(i=a-1;i>=0;i--)
	{
		for(j=a-1;j>=0;j--)
		{
			if(x[i][j] == '*')
			{
				o=i;
				p=j;
				break;
			}
		}
	}
	for(i=m;i<=o;i++)
	{
		for(j=n;j<=p;j++)
		{
			cout<<x[i][j];
		}
	}
	return 0;
}