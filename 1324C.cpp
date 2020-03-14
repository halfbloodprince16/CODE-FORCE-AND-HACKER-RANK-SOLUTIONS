#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>v;
vector<int>u;
vector<int>w;
vector<int>::iterator it;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
void solve()
{
	string s;
	cin>>s;
	int cnt=0;
	//cout<<s.length();
	int c=0;
	for(int i=0;i<s.length();i++)
	{	
		if(s[i] == 'L')
		{
			cnt++;
		}
		else
		{
			c = max(cnt,c);
			cnt=0;
		}
	}

	cout<<max(cnt,c)+1<<endl;

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