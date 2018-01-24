#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int i;
	int x[n];
	
	for(i = 0 ; i < n ; i++)
	{
		cin>>x[i];
	}
	
	vector<int> v;
	vector<int> :: iterator j;
	for(i = 0 ; i < n ; i++)
	{
		if(k % x[i] == 0)
		{
			v.push_back(x[i]);
		}
	}
	
	cout<<(k/ *max_element(v.begin(),v.end()));
	return 0;
}
