#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,c;
	int n,a,b,sum = 0;
	cin>>n;
	int x[n-1];
	
	for(i = 0 ; i < (n-1) ; i++)
	cin>>x[i];
	
	cin>>a>>b;
	c = b-a;
	for(i = 0 ; i < c ; i++)
	{
		sum = sum + x[i];
	}
	cout<<sum;
	
}
