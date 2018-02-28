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
	int n,k,i,j;
	cin>>n>>k;
	int x[n],hash[101]={};
	int sum=0;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		if(x[i]!=0)
			{hash[x[i]]++;}
	}
	for(i=x[k-1];i<=100;i++)
	{
		sum = sum+hash[i];
	}
	cout<<sum;
	return 0;
}