#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b=0,c,i,j,k,count = 0,flag = 0,temp = 0;
	string s;
	cin>>s;
	if(s[0] > 96 && s[0] < 123)
	{
		s[0] = s[0] -32;
	}
	cout<<s;
	return 0;
}

