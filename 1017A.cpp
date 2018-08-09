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
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j,haha,sum=0;
	string s;
	ll hash[101]={};
	cin>>n;

	ll x[n];
	for (i = 0; i < n; ++i)
	{
		for(j=0 ; j < 4 ; j++)
		{
			cin>>haha;
			sum += haha;
		}
		x[i] = sum;
		sum = 0;
	}
	sort(x+1,x+n,greater<int>());
	/*for(i=0;i<n;i++)
	{
		cout<<x[i]<<endl;
	}*/
	
	if(n==1){return cout<<"1",0;}
	for(i=1;i<n;i++)
	{
		if(x[0] >= x[i])
		{
			return cout<<i , 0;
		}
	}
	cout<<n;
	return 0;
}