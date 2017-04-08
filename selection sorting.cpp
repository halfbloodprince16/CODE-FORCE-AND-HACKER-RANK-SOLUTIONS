#include<iostream>
using namespace std;
int min(int x[],int i,int n)
{
	int j,loc,min;
	min = x[i];
	loc = i;
	for(j = i+1;j <= n-1 ; j++)
	{
		min = x[j];
		loc = j;
	}
	return loc;
}
int main()
{
	int n;
	cin>>n;
	int x[n],i,j,temp,loc;
	for(i=0;i<=n-2;i++)
	{
		loc = min(x,i,n);
		temp = x[i];
		x[i] = x[loc];
		x[loc] = temp;
		
	}
	for(i = 0 ; i < n ; i++)
	{
		cout<<x[i];
	}
	

}

