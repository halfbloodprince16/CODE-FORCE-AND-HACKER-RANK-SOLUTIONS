#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	int i,j,k,a,b=0,c,count = 0,flag =0,len = 0;
	int x[b];
	int h[200] = {0};
	string s;
	cin>>s;
	
	for(i = 0 ; i < s.size() ; i++)
	{
		//cin>>x[i];
		h[s[i]-97]++;	
	}
	for(i = 0 ; i < 26 ; i++)
	{
		if(h[i] == 1 )
		{
			x[i] = h[i];
			b++;
			
		}
		if(h[i] > 1)
		count++;
		
	}
	b = b + count;
	if(b%2==0)
	cout<<"CHAT WITH HER!";
	else
	cout<<"IGNORE HIM!";
	return 0;
}
