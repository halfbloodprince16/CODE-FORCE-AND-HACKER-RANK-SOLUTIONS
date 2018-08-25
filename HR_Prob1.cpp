#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>::iterator it;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
int res = 0;

/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/

int strtoint(char c,int ans)
{
	int res = (int)c-48;
	return res+ans;
}

int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j;
	string s;
	ll hash[101]={};
	int ans=0,fl=0;
	cin>>n;
	while(n>0)
	{
		cin>>s;
		while(fl == 0)
		{
			ans=res=0;
			for(i=0;i<s.length();i++)
			{
				ans += (int)s[i]-48;//strtoint(s[i],ans);
			}
			if(ans > 9)
			{
				stringstream ss;
				ss << ans;
				s = ss.str();
				fl=0;
			}
			else
			{
				fl=1;
			}
		}		
		//cout<<ans<<res;
		v.push_back(ans);
		res = ans = fl = 0;
		n--;
	}
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<endl;
	}
	return 0;
}