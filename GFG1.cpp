#include"bits/stdc++.h"
#include"stdio.h"
using namespace std;


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string s;
	string t="";
	while(n)
	{
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if(isdigit(s[i])!= 0)
			{
				t = t+s[i];
			}
			else
			{
				cout<<t;
				t = "";
			}
		}
		n--;
	}
	cout<<t;
	return 0;
}