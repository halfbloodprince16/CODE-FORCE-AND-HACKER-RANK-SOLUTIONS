#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
typedef pair<int,int> ipair;
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
	for(i=0;i<s.length();i++)
	{
		if((s[i]!='a'||s[i]!='e'||s[i]!='i'||s[i]!='o'||s[i]!='u')&&(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'))
		{
			s[i] = '0';
			s[i+1] = '0';
		}
		else if(s[i] == 'n')
		{
			s[i] = '0';
		}
			
	}
	for(i=0;i<s.length();i++)
	{
		if(s[i] != '0')
		{
			return cout<<"NO",0;
		}
	}
	//cout<<s;
	cout<<"YES";
	return 0;
}