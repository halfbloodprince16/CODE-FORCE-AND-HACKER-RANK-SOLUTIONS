#include <iostream>

using namespace std;
int n=0,x=0,y=0,z=0,a[10000];
int main()
{
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	x=0;
	y=0;
	z=0;
	if(n==1)
	{
		cout <<"YES";
		return 0;
	}
	for(int i=1; i<n; i++)
	{
		if(a[i]>a[i-1])
		{
			if(x==0 && z==0)
			{
				x=1;
			}
			else if(y==1 || z==1)
			{
				cout << "NO";
				return 0;
			}
		}
		else if(a[i]==a[i-1])
		{
			if(x==0)
				x=1;
			if(z==1)
			{
				cout << "NO";
				return 0;
			}
			y=1;
		} 
		else if(a[i]<a[i-1])
		{
			if(z==0)
			{
				if(x==0)
					x=1;
				if(y==0)
					y=1;
				z=1;
			}
		}
	}
	if(x==1 && y==1)
	{
		cout <<"YES";
		return 0;
	}
	if(x==1 && y==0 && z==0)
	{
		cout <<"YES";
		return 0;
	}
	if(x==0 && y==1 && z==0)
	{
		cout <<"YES";
		return 0;
	}
	if(x==0 && y==0 && z==1)
	{
		cout <<"YES";
		return 0;
	}
	cout << "NO";
	return 0;
}
