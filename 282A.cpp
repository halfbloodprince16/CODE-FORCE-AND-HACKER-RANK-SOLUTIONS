#include<bits/stdc++.h>
using namespace std;
#include<string.h>

int main()
{
	int a,b=0,c,i,j,k,cnt1=0,cnt2=0,ans = 0;
	cin>>a;
	b = 3*a;
	char x[b];
	for(i = 0 ; i < b ; i++)
	{
		cin>>x[i];
		if(x[i] == '+')
		{
			cnt1++;
		}
		if(x[i] == '-')
		{
			cnt2++;
		}
	}
	cnt1 = cnt1/2;
	cnt2 = cnt2/2;
	ans = cnt1 -cnt2;
		
	cout<<ans;
	//for()
	return 0;
}
