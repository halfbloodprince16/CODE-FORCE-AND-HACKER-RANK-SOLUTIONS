#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    cin>>n;
	int x[n][n],y[n][n],z[n][n];
	
	cout<<"enter first matrix"<<endl;
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			cin>>x[i][j];
		}
	}
	cout<<"enter second matrix"<<endl;
		for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			cin>>y[i][j];
		}
	}
    cout<<"mul is :"<<"\n";	
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			z[i][j] = 0;
			for(k = 0 ; k < n ; k ++)
			{
				z[i][j] = z[i][j] + (x[i][k]*y[k][j]);
			}
		}
	}
	
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
				cout<<z[i][j]<<" ";
				
		}cout<<"\n";
	}
}
