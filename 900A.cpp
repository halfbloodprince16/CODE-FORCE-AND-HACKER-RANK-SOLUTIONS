#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v;
	vector<int>::iterator j;
	
	int n,i;
	cin>>n;
	n = 2*n;
	int cnt = 0;
	int x[n];
	int cnt2 = 0;
	for(i = 0 ; i < n ; i++)
	{
		cin>>x[i];
		if(i%2 == 0)
		{
			if(x[i] < 0)
			{
				cnt++;
			}
			else if(x[i] > 0)
			{
				cnt2++;
			}
		}
	}
	
	if(cnt <= 1 || cnt2 == 1)
	{
		cout<<"Yes";
		return 0;
	}
	else if(cnt == n/2||cnt2 == n/2)
	{
		cout<<"Yes";
		return 0;
	}
	cout<<"No";
	
}
