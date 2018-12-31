#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>::iterator itr;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
std::stack<int>a,b;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j,cnt=0;
	string s;
	ll hash[101]={};
	cin>>n;
	ll sum=0,x,y;
	int a1[1000000],a2[1000000];
	while(n>0)
	{
		cin>>x>>y>>sum;
		for(i=0;i<x;i++)
		{
			cin>>a1[i];
		}
		for(i=x-1;i>=0;i--)
		{
			a.push(a1[i]);
		}

		for(i=0;i<y;i++)
		{
			cin>>a2[i];
		}
		for(i=y-1;i>=0;i--)
		{
			b.push(a2[i]);
		}

		bool cond = false;
		int mn=0;
		while(!cond)
		{
			mn = min(a.top(),b.top());
			if(mn == a.top())
			{
				sum -= a.top();
				a.pop();
			}
			else
			{
				sum -= b.top();
				b.pop();
			}

			if(sum >= 0)
			{
				cnt++;

			}
			else
			{
				cond = true;
			}
		}

		n--;
	}
	cout<<cnt;
	return 0;
}