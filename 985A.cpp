#include"bits/stdc++.h"
#include"string.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<ll>v;
vector<ll>u;
vector<ll>w;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*globals*/

/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	
	ll i,j,k,n;
	string s;
	cin>>n>>s;
	int flg1=0,flg2=0,cnt=0;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='1')
		{
			cnt++;
		}
	}
	if(cnt==(n+1)/2)
	{
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
	return 0;
}