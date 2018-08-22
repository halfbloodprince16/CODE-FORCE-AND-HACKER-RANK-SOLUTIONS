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
	string s;
	ll hash[101]={};
	cin>>s;
	cin>>n;
	int x;
	/*char c = int(s[0]+4);
	cout<<c;*/
	for(i=0;i<s.length();i++)
	{
		if(isdigit(s[i]) == true)
		{
			x = int(s[i]);
			x = (x+n)%58;
			if(x<48)
			{
				x = 48+x;
			}
			s[i] = x;
		}
		else if(s[i] >= 65&&s[i]<= 90)
		{
			x = int(s[i]);
			x = (x+n)%91;
			if(x<65)
			{
				x = 65+x;
			}
			s[i] = x;
		}
		else if(s[i] >=97 &&s[i]<= 122)
		{
			x = int(s[i]);
			x = (x+n)%123;
			if(x<97)
			{
				x = 97+x;
			}
			s[i] = x;

		}
	}
	cout<<s;
	return 0;
}