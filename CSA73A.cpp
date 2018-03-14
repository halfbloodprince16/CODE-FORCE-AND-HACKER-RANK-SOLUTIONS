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
	int n,i,j;
	cin>>n;
	int x[n];
	int cnt0=0,cnt1=0,cnt2=0;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		if(x[i] == 0)
		{
			cnt0++;
		}
		if(x[i] == 1)
		{
			cnt1++;
		}
		if(x[i] == 2)
		{
			cnt2++;
		}
	}
	int ans=0;
	if(cnt0>=cnt1&&cnt0>=cnt2)
	{
		ans = ans + cnt2*1;
		ans = ans + cnt1*2;
	}
	else if(cnt1>=cnt0&&cnt1>=cnt2)
	{
		ans = ans + cnt0*1;
		ans = ans + cnt2*2;
	}
	else if(cnt2>=cnt0 && cnt2>=cnt1)
	{
		ans = ans + cnt1*1;
		ans = ans + cnt0*2;
	}
	cout<<ans;

	return 0;
}