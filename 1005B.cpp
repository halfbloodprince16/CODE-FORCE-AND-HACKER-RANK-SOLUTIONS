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
	ll n,k,i,j;
	string s1,s2,str;
	ll hash[101]={};
	cin>>s1>>s2;
	ll cnt1=0,cnt2=0,f;
	ll ans = s1.length()+s2.length();
	ll itr = min(s1.length(),s2.length());
	for(i=1;i<itr+1;i++)
	{
		if(s1[s1.length()-i] == s2[s2.length()-i])
		{
			ans-=2;
		}
		else
		{
			return cout<<ans,0;
		}
	}
	cout<<ans;
	return 0;
}