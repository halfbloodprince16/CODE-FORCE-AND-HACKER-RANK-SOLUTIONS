#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int main()
{
	int c = 0,d,count = 0,flag = 0;
	string s;
	char s1[c];
	int i,j,k;
	cin>>s;
//	cout<<s.size();
	
	for(i = 0 ; i  < s.size() ; i++)
	{
		if(s[i] == s[i+1])
		{
			s[i] = NULL;
			s[i+1] = NULL;
			flag++;
		}
	}
	if(flag != 0)
	{
	
	for(i = 0 ; i  < s.size() ; i++)
	{
		for( j = i+1 ; j < s.size() ; j++)
		{
			if(s[i] == s[j])
			{
				s[j] = NULL;
				s[i] = NULL;
			}
		}
	}
	}
	for(i = 0 ; i  < s.size() ; i++)
	{
		if(s[i]!=NULL)
		{
			cout<<s[i];
			count++;
		}
	//	d = s.size();
	}
	if(count == 0)
	cout<<"Empty String";
	
	/*if(d!=0)
	cout<<s;
	else
	cout<<"Empty String";*/
}
