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
	ll t,k,m,n,i,j;
	cin>>t;
	ll sum=0,cnt=0,haha;
	for(j=0;j<t;j++)
	{
		cin>>k>>m>>n;
		for(i=0;i<n;i++)
		{
			cin>>haha;			
			if(m > sum && m <= sum+haha)
			{
				v.push_back(i+1);
			}
			sum += haha;
		}
		sum=0;
	}
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
/*
3
500 200 5
100 100 100 100 100
470 143 5
11 24 420 6 9
490 258 3
230 17 243
*/