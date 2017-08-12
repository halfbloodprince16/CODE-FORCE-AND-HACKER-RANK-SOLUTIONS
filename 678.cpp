//59A
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,i,j,k,count = 0,count2 = 0,flag = 0,m,n;
	cin>>a;
	int x[a][2];
	
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < 2 ; j++)
		{
			cin>>x[i][j];
		}
	}
	for(i = 0 ; i < a ; i++)
	{
		if(x[i][1] == x[i+1][1])
		flag = 1;
	}
	if(flag == 1)
	cout<<count;
	else
	cout<<"1";
	
}
