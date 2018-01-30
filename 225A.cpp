#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,m,i;
	cin>>n>>x;
	m = 2*n;
	int in;
	vector<int>v;
	vector<int>::iterator j;
	
	for(i = 0 ; i < m ; i++)
	{
		cin>>in;
		v.push_back(in);
	}
	
	for(i = 0 ; i < m ; i++)
	{
		if(i%2 == 1 && v[i] == v[i+2])
		{
			if(v[i-1]+v[i+1] == 7)
			{
				cout<<"YES";
				return 0;
			}
		}		
	}
	cout<<"NO";
	return 0;
}
