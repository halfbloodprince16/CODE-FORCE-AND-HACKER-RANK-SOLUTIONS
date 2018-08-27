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
	ll hash[26]={};
	cin>>s;
	int x;
	for(i=0;i<s.length();i++)
	{
	    x = (int)s[i];
	    x = x-97;
	    hash[x]++;
	}
	int id,max=0;
	string str[cnt],ss={};
	char c;
	for(i=0;i<26;i++)
	{
	    if(hash[i]!= 0)
	    {
	    	c = 97+i;
	    	for(j=0;j<s.length();j++)
	    	{
	    		if(s[i]!=c)
	    		{
	    			ss += s[i];
	    		}
	    	}
	    	str[i]
	    }
	}
	

    
	return 0;
}