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
	int n,k,i;
	cin>>n>>k;
	int x[n]={};
	k = k%n;
	for(i=0;i<n;i++)
	{
		cin>>x[i];;
	}
	while(k>0)
	{	
		int tmp = x[0];
		for(i=0;i<n-1;i++)
		{
			x[i] = x[i+1];
		}
		x[n-1] = tmp;
		k--;
	}

	for(i=0;i<n;i++)
	{
		cout<<x[i]<<" ";
	}
	return 0;
}