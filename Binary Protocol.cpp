#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int main()
{
	int i,j,k,a=0,b,c,m,n;
	cin>>b;
	int s1[b];
	int s2[a];
	for(i = 0 ; i < b ; i++)
	cin>>s1[i];
	
	for(i = 0 ; i < b ; i++)
	{
		for(j=i+1 ; j < b ; j++)
		{
			if(s1[i] == s1[j])
			{
				s2[a] = s1[i] + s1[j];
				
			}
		}
	}
	for(i = 0 ; i < a ; i++)
	cout<<s2[i];
}
