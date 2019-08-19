#include"bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,x;
	cin>>t;

	while(t>0)
	{
		cin>>n>>x;
		if(x<10)
		{
			cout<<(10-x)*(n-1);
		}
		else
		{
			cout<<"0";
		}
		t--;
	}
	return 0;
}