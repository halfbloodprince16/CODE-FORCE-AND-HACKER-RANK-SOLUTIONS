#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<string>v;
vector<string>::iterator itr;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j,cnt=0;
	string s;
	ll hash[26]={};
	ll t;
	cin>>t;
	while(t>0)
	{
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			hash[int(s[i])-97]++;
		}
		for(i=0;i<26;i++)
		{
			if(hash[i]>=1)
				cnt++;
		}
		if(cnt==1)
		{
			v.push_back("-1");
		}
		else
		{
			v.push_back(s);
		}
		hash[26]={};
		cnt=0;
		t--;
	}
	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<*itr<<endl;
	}
	return 0;
}