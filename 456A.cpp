#include<bits/stdc++.h>
using namespace std;

int main()
{
	float a;
	int b,i,cnt=0;
	cin>>a;
	b = 2*a;
	int x[b];
	for(i = 0 ; i < b ; i++)
	{
		cin>>x[i];
	}

	for(i = 0 ; i < b ; i=i+2)
	{
		if(x[i] < x[i+1])
		{
			cnt++;
		}
	}
	

	if(cnt >= a/2)
	{
		cout<<"Happy Alex";
	}
	else
	{
		cout<<"Poor Alex";
	}
}
