#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<string>v;
vector<string>::iterator itr,it;
vector<string>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j,cnt=0;
	string s;
	ll hash[101]={};
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s;
		v.push_back(s);
	}
	for(i=0;i<n;i++)
	{
		cin>>s;
		u.push_back(s);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(v[i] == u[j])
			{
				cnt++;
				u[j] = "0";
				break;
			}
		}
	}
	cout<<n-cnt;
	return 0;
}