#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b=0,c,i,j,k,count = 0,flag = 0,temp = 0,sum = 0;
	cin>>a;
	int x[a][2],y[b];
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j  < 2 ; j++)
		{
			cin>>x[i][j];
		}
	}
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < 2 ; j++)
		{
			if(j%2==0)
			{
				sum = sum - x[i][j];
				y[b] = sum;
				b++;
			}
			if(j%2 == 1)
			{
				sum = sum + x[i][j];
				y[b] = sum;
				b++;
			}
		}
	}
	
	
	for(i = 0 ; i < b ; i++)
	{
		for(j = i+1 ; j  < b ; j++)
		{
			if(y[i]< y[j])
			{
				temp = y[i];
				y[i] = y[j];
				y[j] = temp;
			}
		}
	}
	
//	for(i = 0 ; i < b ; i++)
	cout<<y[0];
	return 0;
}
