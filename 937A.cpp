#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
const int N = 1e6 + 5;
vector<int>v;
vector<int>::iterator vi;
map<ll,ll>mp;
map<ll,ll>::iterator mi;

int main()
{
	int n,cnt=0,haha;
	cin>>n;
	while(n)
	{
		cin>>haha;
		v.push_back(haha);
		n--;
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	int i=0;

	for(i=0;i<v.size();i++)
	{
		if(v[i]!=0)
		{
			cnt++;
		}
		
	}
	cout<<cnt;
	return 0;
}
