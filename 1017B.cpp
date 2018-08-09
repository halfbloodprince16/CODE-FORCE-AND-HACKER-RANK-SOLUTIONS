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
	ll n,k,i,j,cnt=0;
	string s1,s2;
	ll hash[101]={};
	cin>>n;
	cin>>s1>>s2;
	for(i=0;i<s1.length();i++)
	{
		if(s1[i]=='0'&&s2[i]=='0')
		{
			cnt++;
		}
		else if(s1[i]=='1'&&s2[i]=='0')
		{
			cnt++;
		}
	}
	cout<<2*cnt;
	return 0;
}