#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	int i,j,a,b=0,c,count = 0,flag =0;
	long long int sum = 0;
	long long int n,w,k;
	cin>>k>>n>>w;
	for(i = 1 ; i <= w ; i++)
	{
		sum = sum + i*k;
	}
	if(sum < n)
	cout<<"0";
	else
	cout<<(sum - n);
	return 0;
}
