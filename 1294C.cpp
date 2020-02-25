#include"bits/stdc++.h"
using namespace std;

void solve()
{
	int n,m;
	cin>>n;
	m = n;
	std::vector<int>v;
	for(int i=2;i*i<n;i++)
	{
		if(n%i == 0)
		{
			v.push_back(i);
			n /= i;
		}
		if(v.size() == 2)
		{
			break;
		}
	}

	if(v.size() < 2 || (v.size() == 2 && m / (v[0] * v[1]) <= v[1]))
	{
		cout << "NO" << endl;
		return;
	}
	else 
	{
		cout << "YES" << endl;
    	cout << v[0] << ' ' << v[1] << ' ' << m / (v[0] * v[1]) << endl;
	}

	v.clear();

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