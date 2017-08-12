#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,i,j,k,count = 0,flag = 0,m,n;
	cin>>a;
	string s;
	cin>>s;
	for(i = 0 ; i < a ; i++)
	{
		if(s[i] == s[i+1])
		{
			count++;
		}
	}
	cout<<count;
	
}
