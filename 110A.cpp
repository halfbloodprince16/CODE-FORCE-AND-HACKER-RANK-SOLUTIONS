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
int main()
{
	fast;
	int n,i,j;
	string s;
	cin>>s;
	int cnt=0;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='4'||s[i]=='7')
		{
			cnt++;
		}
	}
	ostringstream str1;
	str1<<cnt;
	string count = str1.str();

	for(i=0;i<count.length();i++)
	{
		if(count[i]!='4'&& count[i]!='7')
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}