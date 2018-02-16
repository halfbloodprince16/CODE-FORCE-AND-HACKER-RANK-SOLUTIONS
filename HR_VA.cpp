#include"bits/stdc++.h"
using namespace std;

int main()
{
	int n,i,j,k;
	cin>>n;
	int ans=0;
	int a=5,x;

	for (int i = 0; i < n; i++)
	{
		x = floor(a/2);
		ans = ans + x;
		a = 3*x;
	}
	cout<<ans;
	return 0;
}