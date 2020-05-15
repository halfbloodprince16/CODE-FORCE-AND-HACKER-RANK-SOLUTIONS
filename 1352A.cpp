#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>u;
vector<int>w;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/

void solve()
{
	string s;
	cin>>s;
	int l = s.length()-1;

	int cnt=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!='0'){cnt++;}
	}
	cout<<cnt<<endl;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!='0')
		{
			cout<<s[i];
			for(int j=0;j<l;j++)
			{
				cout<<"0";
			}
			cout<<" ";
			l--;
		}
		else
		{
			l--;
		}
	}
	cout<<endl;

	return;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}