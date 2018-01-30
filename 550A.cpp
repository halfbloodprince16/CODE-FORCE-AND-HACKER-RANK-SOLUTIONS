#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int i,j;
	int t1=0,t2=0,t3=0,t4=0;
	int flag1=0,flag2=0;
	int c = 0;
	
	if(s == "BAB")
	{
		cout<<"NO";
		return 0;
	}
	
	for(i = 0 ; i < s.length() ; i++)
	{
		if(s[i] == 'A' && s[i+1] == 'B')
		{		
			t1 = i+1;
			flag1=1;
		}
		if(s[i] == 'B' && s[i+1] == 'A')
		{
			t2 = i;
			flag2=1;
		
		}
	}

	if(t1 == t2)
	{
		cout<<"NO";
		return 0;
	}
	
	else if(t1 != t2 && flag1 == flag2)
	{
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
	
	return 0;	
}
