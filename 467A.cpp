#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	int i,j,k,a,b,c,count = 0,flag =0,len = 0;
	cin>>a;
	b = 2*a;
	int x[b];
	for(i = 0 ; i < b ; i++)
	{
		cin>>x[i];
	}
	for(i = 0 ; i < b ; i += 2)
	{
		if(x[i+1] - x[i] >= 2)
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}
