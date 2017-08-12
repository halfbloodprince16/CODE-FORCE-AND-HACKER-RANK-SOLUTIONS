#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	int i,j,k,a,b=0,c,count = 0,flag =0,len = 0;
	string s1,s2;
	cin>>s1>>s2;
	
	for(i = 0 ; i < s1.size() ; i++)
	{
		if(s1[i] > 64 && s1[i] < 91)
		{
			s1[i] = s1[i] + 32;
		}
	}
	for(i = 0 ; i < s2.size() ; i++)
	{
		if(s2[i] > 64 && s2[i] < 91)
		{
			s2[i] = s2[i] + 32;
		}
	}
	if(s1[s1.size()] > s2[s2.size()])
	{
		cout<<"1";
		return 0;
	}
	if(s1[s1.size()] < s2[s2.size()])
	{
		cout<<"-1";
		return 0;
	}
	if(s1[s1.size()] = s2[s2.size()])
	{
		cout<<"0";
		return 0;
	}
}
