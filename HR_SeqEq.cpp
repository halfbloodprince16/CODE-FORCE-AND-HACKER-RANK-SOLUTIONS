#include"bits/stdc++.h"
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	int x[n];
	for(i = 0 ; i < n ; i++)
	{
		cin>>x[i];
	}
	int t = n;
	vector<int>v;

	int a=0,b=0,cnt=1;


	while(n)
	{
		for(i = 0 ; i < t ; i++)
		{
			if(x[i] == cnt)
			{
				a = i+1;
			}
		}
		for(i = 0 ; i < t ; i++)
		{
			if(x[i] == a)
			{
				b = i+1;
			}
		}
		cout<<b<<endl;
		cnt+=1;
		a = b = 0;
        n--;
	}
	
	
	return 0;
}