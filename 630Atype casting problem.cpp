#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int main()
{
	int i,j,k,a,b,c,l = 0,count = 0;
	long long int n;
	string s;
	cin>>s;
	l = s.size();
	for(i = 0 ; i < l ; i++)
	{
		if(s[i] == '4'|| s[i] == '7')
		{
			count++;
		}
	}
	if(count == l)
	{
		cout<<"YES";
	}
	else 
	{
		int b = atoi(s.c_str());
		//cout<<b;
		if(b%4 == 0|| b%7 == 0||b%47 ==0)
		{
			cout<<"YES";
		}
		else
		cout<<"NO";
	}
	return 0;
}
