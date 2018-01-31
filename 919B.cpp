#include<bits/stdc++.h>
#include <sstream>
using namespace std;

int main()
{
	long int x,y;
	cin>>x;
	
	if(x == 0)
	{
		cout<<"10";
		return 0;
	}
	long int con = x;
	int i,j,k;
	int sum = 0;
	while(x >0)
	{
		y = x%10;
		sum = sum +y;
		x = x/10;
	}
	
	int t = 10-sum;
	
	if(sum < 10)
	{
		cout<<con<<t;
	}
	else if(sum == 10)
	{
		cout<<con;
	}
	return 0;
}

