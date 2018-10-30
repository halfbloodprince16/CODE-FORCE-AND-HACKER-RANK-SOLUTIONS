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

string substring(string str,int b,int e)
{
	int i,j;
	string s;
	int hash[26]={};

	for(i=b;i<=e;i++)
	{
		s += str[i];
		hash[int(str[i])-97]++;
	}
	int len=s.length();
	int fl=0;
	for(i=0;i<26;i++)
	{
		if(hash[i]>len/2)
		{
			fl=1;
			//cout<<"hi";
			return "NO";
		}
		else
		{
			continue;
		}
	}

	return s;
}

int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j;
	string s,ss;
	ll hash[101]={};
	cin>>n;
	cin>>s;
	if(n==1){return cout<<"NO",1;}
	for(i=0;i<s.length()-2;i++)
	{
		for(j=i+2;j<s.length();j++)
		{
			ss = substring(s,i,j);
			if(ss!="NO")
			{
				cout<<"YES"<<endl<<ss;
				return 0;
			}
			else
			{
				continue;
			}
		}
		j=0;
	}
	cout<<"NO";
	return 0;
}