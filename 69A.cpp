#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,a,b,c;
	cin>>a;
	int x[a][3];
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < 3 ; j++)
		{
			cin>>x[i][j];
		}
	}
	int y[a]={};
	for(i = 0 ; i < 3 ; i++)
	{
		for(j = 0 ; j < a ; j++)
		{
			y[i] = y[i] + x[j][i];
		//	y[i] = y[i] + pow(x[i][j],2);
		} 
	}
/*	for(i = 0 ; i < a ;i++)
	{
		cout<<y[i];
	}*/
	for(i = 0 ; i  < a ;i++)
	{
		if(y[i] != 0)
		{
			cout<<"NO";return 0;
		}
	}
	cout<<"YES";
	return 0;
}
