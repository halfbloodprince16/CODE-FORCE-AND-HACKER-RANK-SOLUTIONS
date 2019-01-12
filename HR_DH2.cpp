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
	ll n,k,i,j;
	string s1,s2;
	ll h1[26]={};
	ll h2[26]={};
	
	cin>>n;
	int x = n;
	int fl=0;
	while(x>0)
	{
		cin>>s1>>s2;
		for(i=0;i<s1.length();i++)
		{
			h1[int(s1[i])-97]++;
		}
		for(i=0;i<s2.length();i++)
		{
			h2[int(s2[i])-97]++;
		}
		for(i=0;i<26;i++)
		{
			if(h2[i] > 0 && h1[i] > 0)
			{
				v.push_back("YES");
				fl=1;
				break;
			}
		}
		if(fl==0)
		{
			v.push_back("NO");
		}
		for(i=0;i<26;i++)
		{
			h1[i] = 0;
			h2[i] = 0;
		}
		fl=0;
		x--;
	}
	
	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<*itr<<endl;
	}
	return 0;
}