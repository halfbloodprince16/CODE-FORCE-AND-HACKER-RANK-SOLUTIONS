#include<iostream>
using namespace std;
int main()
{
	int n,k,i,j,ans;
	cin>>n;
	int x[n];
	cin>>k;
	for(i = 0 ; i < n ; i++)
	{
		cin>>x[i];
	}
	int temp;
	for(i = 0 ; i < n ; i++)
	{
		for(j = i+1; j<n ; j++)
		{
			if(x[i] > x[j])
			{
			
			temp = x[i];
			x[i] = x[j];
			x[j] = temp;
		}
		}
	}
	for(i = 0 ; i < n ; i++)
	{
		cout<<x[i];
	}
	if(x[n-1] > k)
	{
		ans = x[n-1] - k;
		cout<<ans;
	}
	
	else if(x[n-1] < k)
    cout<<"0";
	

	return 0;
}
