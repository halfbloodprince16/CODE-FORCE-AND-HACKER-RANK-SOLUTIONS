#include"bits/stdc++.h"
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int x[n];
	int cnt_odd = 0;
	int cnt_even=0;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
		sum += x[i];
		if(x[i]%2 == 0)
		{
			cnt_even++;
		}
		else
		{
			cnt_odd++;
		}
	}

	if (cnt_even && cnt_odd) cout << "YES" << endl;
	else if (cnt_odd % 2 == 1 && cnt_even == 0) cout << "YES" << endl;
	else cout << "NO" << endl;

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