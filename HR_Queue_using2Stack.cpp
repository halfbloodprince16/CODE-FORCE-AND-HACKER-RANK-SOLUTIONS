#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
std::stack<int>a,b;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j;
	string s;
	ll hash[101]={};
	
	cin>>n;
	ll x,y;
	while(n>0)
	{
		cin>>x;
		if(x == 1)
		{
			cin>>y;
			while(!a.empty())
			{
				b.push(a.top());
				a.pop();
			}
			a.push(y);
			while(!b.empty())
			{
				a.push(b.top());
				b.pop();
			}
		}

		if(x==2)
		{
			a.pop();
		}
		if(x==3)
		{
			cout<<a.top()<<endl;
		}
		n--;
	}

	return 0;
}