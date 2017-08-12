#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,i,j,sum =0,flag = 0,count1= 0,count2=0,check= 0,ans= 0;
	cin>>a>>b>>c;
	int x[a];
	for(i = 0 ; i < a ; i++)
	cin>>x[i];
	
	for(i = 0; i < a ; i++)
	{
		if(x[i] == 1)
		{
			count1++;
		}
		if(x[i] == 2)
		{
			count2++;
		}
	}
	sum = count1+2*count2;
	
	check = b + 2*c;
	 ans = sum - check;
	 if(ans < 0)
	 cout<<"0";
	 else
	 cout<<ans;
}
