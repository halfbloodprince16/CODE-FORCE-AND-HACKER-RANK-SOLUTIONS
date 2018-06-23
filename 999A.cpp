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
	int n,k;
	cin>>n>>k;
	int i,j;
	int x[n];
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	int cnt1=0,cnt2=0;
	for(i=0;i<n;i++)
	{
		if(k >= x[i])
		{
			cnt1++;
		}
		else
			break;
	}
	for(i=n-1;i>=0;i--)
	{
		if(k >= x[i])
		{
			cnt2++;
			//cout<<x[i];
		}
		else
			break;
	}
	//cout<<cnt1<<cnt2;
	if(cnt1==n&&cnt2==n){return cout<<n,0;}
	else
		return cout<<cnt1+cnt2 ,0;
	return 0;
}