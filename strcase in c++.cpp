#include<iostream>
using namespace std;
int main()
{
	int i,n,j;
	cin>>n;
	for(i = 0 ; i <= n ; i++)
	{
		for(j = 0 ; j <= n ; j++)
		{
			if(j <= n - i)
			cout<<"*";
			else
			cout<<" ";
		}cout<<"\n";
	}
	return 0 ;
}
