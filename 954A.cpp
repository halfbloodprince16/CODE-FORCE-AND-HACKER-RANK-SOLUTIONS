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
	int n;
	cin>>n;
	string s;
	cin>>s;
	int i,j,cnt=0;
	for(i=0;i<n;)
	{
		if(s[i]=='U'&& s[i+1]=='R')
		{
			cnt++;
			i+=2;
			continue;
		}
		else if(s[i]=='R'&& s[i+1]=='U')
		{
			cnt++;
			i+=2;
			continue;
		}
		else
		{
			cnt++;
			i++;
			continue;
		}
	}
	cout<<cnt;
	return 0;
}