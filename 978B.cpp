#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<pair<int,int>>v;
vector<pair<int,int>>u;
priority_queue<int>pq;
std::map<int,int> m1,m2;
std::vector<pair<int,int>>::iterator it,ir;
const int N=1e6+10;
int flg=0;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	int n,i,j,k;
	cin>>n;
	string s;
	cin>>s;
	int cnt=0;
	for(i=0;i<s.length()-2;i++)
	{
		if(s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x')
		{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}