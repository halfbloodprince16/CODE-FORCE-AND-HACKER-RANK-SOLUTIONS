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
	int n,i,j,k;
	string s;
	cin>>n;
	cin>>s;
	int cnt=0,cnt1=0,flg=0;
	for(i=0;i<s.length();i++)
	{
		if(s[i] == '1')
		{
			cout<<"1";
			for(j=i+1;j<s.length();j++)
			{
				if(s[j]=='0')
				cnt++;
			}
			flg=1;
			goto loop;
		}
		
	}
	loop:while(cnt)
	{
		cout<<"0";
		cnt--;
	}
	if(flg==0){cout<<"0";}
	return 0;
}