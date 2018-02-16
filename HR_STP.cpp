#include"bits/stdc++.h"
using namespace std;

int main()
{
	int t,n,m,s;
	int i,j,k;
	cin>>t;
	int tt = t;
	int ans=0;
	vector<int>v;
	while(t)
	{
		cin>>n>>m>>s;
		ans = (s-1+m)%n;
		v.push_back(ans);
		t--;
	}


	for(i = 0 ; i < tt ; i++)
	{
		cout<<v[i]<<endl;
	}

	return 0;
}