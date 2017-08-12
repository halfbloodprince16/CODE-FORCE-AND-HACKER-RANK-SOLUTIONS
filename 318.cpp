#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,a,b,c,count = 0,flag = 0;
	cin>>a;
	c = a%5;
	if(c == 0)
	{
		cout<<a/5;
	}
	else
	{
		cout<<a/5 + 1;
	}
	
    return 0;
}
