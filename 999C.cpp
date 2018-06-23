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
	cin>>n>>k;
	string s;
	cin>>s;
	ll ascii=97;
	int flg=0;
	while(k>0)
	{
		for(i=0;i<s.length();i++)
		{
			if(int(s[i]) == ascii)
			{
				s[i]=0;
				k--;
				flg=1;
				break;
			}

		}
		if(flg==0)
		{
			ascii++;
		}
		flg=0;
	}
	for(i=0;i<s.length();i++)
	{
		if(s[i] != 0)

		{
			cout<<s[i];
		}
	}
	return 0;
}