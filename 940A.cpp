#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
const int N = 1e6 + 10;

int main()
{
	int n;
	cin>>n;
	int i;
	int cnt =0;
	for(i=1;i<=n/2 ; i++)
	{
		if((n-i)%i == 0)
		{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}