//460A
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,count = 0;
	cin>>a>>b;
	int i,j,k;
	
	for(i = 1 ; i <= a ; i++)
	{
		if(i%b == 0)
		{
			a++;
			count++;
		}
		else
		count++;
	}
	cout<<count;
	return 0;
}
