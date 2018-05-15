#include"bits/stdc++.h"
#include"string.h"
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
	ll n,i;
	string s1,s2,s3;
	cin>>n;
	cin>>s1>>s2>>s3;
	int ch[52]={};
	int ans=0;
	int x;
	for(i=0;i<s1.length();i++)
	{
		if(s1[i] <= 65 && s1[i] >= 90)
		{
			x = (int)s1[i] - 65;
			ch[x]++;
		}
		else
		{
			x = (int)s1[i] - 97;
			ch[x+26]++;
		}
	}
	for(i=0;i<52;i++)
	{
		cout<<ch[i];
	}
	return 0;
}