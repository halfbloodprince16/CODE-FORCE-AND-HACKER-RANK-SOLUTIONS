#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	vector<int>::iterator j;
	
	int n,i;
	cin>>n;
	int x[n];
	
	for(i = 0 ; i < n ; i++)
	{
		cin>>x[i];
	}
	double y;
	for(i = 0 ; i < n ; i++)
	{
		y = sqrt(x[i]);
		if(y - (int)y != 0)
		{
			v.push_back(x[i]);
		}
		y=0;
	}
	
	cout<<*max_element(v.begin(),v.end());
	
	return 0;
}
