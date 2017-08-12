#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int main()
{
	int i,j,k,a,b,c,count = 0,p1 = 0,p2 = 0;
	string s;
	cin>>a;
	cin>>s;
	for(i = 0 ; i < s.size() ; i++)
	{
		if(s[i] == 'A')
		{
			p1++;
		}
		else if(s[i] == 'D')
		{
			p2++;
		}
	}
	if(p1>p2)
	{
		cout<<"Anton";
	}
	else if(p1<p2)
	{
		cout<<"Danik";
	}
	else if(p1 == p2)
	{
		cout<<"Friendship";
	}
	return 0;
}
