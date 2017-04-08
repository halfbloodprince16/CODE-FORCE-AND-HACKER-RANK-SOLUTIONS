#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x[n],i,j,k;
	for(i = 0 ; i < n ; i++)
	{
		cin>>x[i];
	}
	int temp;
	for(i = 0 ; i < n ; i++)
	{
	
	for(i = 0 ; i < n ; i++)
	{
		for(j = i+1 ; j < n ; j++)
		{
		if(x[i] > x[j])
		{
			temp = x[i];
			x[i] = x[j];
			x[j] = temp;
		}
	    }
	   
	} cout<<x[i];}

	return 0 ;
}
