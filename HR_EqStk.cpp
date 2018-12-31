#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
std::stack<int>a,b,c;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j,x,y,z;
	ll hash[101]={};
	
	cin>>x>>y>>z;
	int sum1=0,sum2=0,sum3=0;
	int r[x],s[y],t[z];
	for(i=0;i<x;i++)
	{
		cin>>r[i];
		sum1 += r[i];
	}
	for(i=x-1;i>=0;i--)
	{
		a.push(r[i]);
	}

	for(i=0;i<y;i++)
	{
		cin>>s[i];
		sum2 += s[i];
	}
	for(i=y-1;i>=0;i--)
	{
		b.push(s[i]);
	}

	for(i=0;i<z;i++)
	{
		cin>>t[i];
		sum3 += t[i];
	}
	for(i=z-1;i>=0;i--)
	{
		c.push(t[i]);
	}
	
	bool cond = false;
	int mx=0,ld=0;
	while(!cond)
	{
		
		if((sum1 == sum2) and (sum3 == sum2))
		{
			cond = true;
		}
		else
		{
		
			mx = max(sum1,max(sum2,sum3));
			if(mx == sum1)
			{
				ld = a.top();
				
				a.pop();
				sum1 -= ld;
			}
			else if(mx == sum2)
			{
				ld = b.top();
			
				b.pop();
				sum2 -= ld;
			}
			else
			{
				ld = c.top();
				c.pop();
				sum3 -= ld;
			}
		}
		
	}
	cout<<sum1;
	return 0;
}