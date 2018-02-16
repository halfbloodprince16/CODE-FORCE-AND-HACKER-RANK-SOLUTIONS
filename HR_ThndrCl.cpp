#include"bits/stdc++.h"
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int i,j;

	int x[n];
	for(i = 0; i < n ; i++)
	{
		cin>>x[i];
	}
	int enr=100;
	int end=0;
	i = 0 ;
	int flag = 1;
	while(1)
	{
		if(x[i] == 1)
		{
			enr -= 3;

		}
		else
		{
			enr -= 1;
		}
		if(i == 1)
		{
			flag = 1;
		}

		i += k;
		if(i > n-1)
		{
			i = i%n;
		}
		if(flag == 1 && i == 0)
		{
			break;
		}
	}
	cout<<enr;
	return 0;
}