#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin>>x;
	
	int z = x%10;
	
	if(z >=1 && z <= 9)
	{
		switch(y)
		{
			case 1 : cout<<x-1;break;
			case 2 : cout<<x-2;break;
			case 3 : cout<<x-3;break;
			case 4 : cout<<x-4;break;
			case 5 : cout<<x-5;break;
			case 6 : cout<<x+4;break;
			case 7 : cout<<x+3;break;
			case 8 : cout<<x+2;break;
			case 9 : cout<<x+1;break;
		}
	}
	else
	{
		cout<<x;
		return 0;
	}
	

	return 0;
}
