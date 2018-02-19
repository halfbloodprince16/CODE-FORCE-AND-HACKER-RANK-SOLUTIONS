#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
const int N = 1e6 + 10;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int x=0,y=0;
	int cnt=0;
	int i;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='R')
		{
			x++;
			if(x==y && s[i+1]=='R')
			{
				cnt++;
			}
		}
		else if(s[i] == 'U')
		{
			y++;
			if(x==y && s[i+1]=='U')
			{
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}