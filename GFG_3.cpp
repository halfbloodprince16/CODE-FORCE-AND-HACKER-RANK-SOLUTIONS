#include"bits/stdc++.h"
using namespace std;

int ch=0;
int org=0;

int deductio(int n)
{
	if(ch==1 and n > 0)
	{
		cout<<n<<" ";
		if(n == org)
		{
			return 0;
		}
		return deductio(n+5);
	}
	else if(n > 0)
	{
		cout<<n<<" ";
		return deductio(n-5);
	}
	else if(n == 0 or n < 0)
	{
		cout<<n<<" ";
		ch=1;
		return deductio(n+5);
	}
}

int main()
{
	int t,n,i,j;
	cin>>t;

	while(t>0)
	{
		cin>>n;
		org = n;
		deductio(n);
		ch=0;
		t--;
	}
	return 0;
}