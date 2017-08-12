#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,i,j,k,count = 0,flag = 0,m,n;
	long long int temp = 0;
	long long int sum = 0;
	cin>>a;
	long long int x[a];
	for(i = 0 ; i < a ; i++)
	cin>>x[i];
	
	for(i = 0 ; i < a ; i++)
	{
		for(j = i+1 ; j < a ; j++)
		{
			if(x[i]>x[j])
			{
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
	
	for(i = 0 ; i < a ; i++)
	{
		sum = sum + x[i];
	}
	
	if(sum%2 == 0)
	{
		cout<<sum;	
	}
	else
	{
		for(i = 0 ; i < a ; i++)
		{
			if(x[i]%2 == 1)
			{
				sum = sum -x[i];break;
			}
		}
		cout<<sum;
	}
	
	/*for(i = 0 ; i < a ; i++)
	cout<<x[i];*/
}
