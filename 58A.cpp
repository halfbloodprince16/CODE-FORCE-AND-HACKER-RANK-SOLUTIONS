#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,sum=0,temp=0,add=0,count=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	
for(int i=0;i<n;i++)
	{
		add=add+a[i];
		count++;
		if(add> (sum/2) )
		break;
	}
	
cout<<count;
}
