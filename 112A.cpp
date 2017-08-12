#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k,l1= 0,l2= 0;
	string s,t;
	cin>>s;
	cin>>t;
	l1 = s.size();
	l2 = t.size();
	for(i = 0 ; i < l1 ; i++)
	{
		s[i] = tolower(s[i]);
		
	}
	//cout<<s;
	for(i = 0 ; i < l2 ; i++)
	{
		t[i] = tolower(t[i]);
	}
//	cout<<t;
	for(i = 0 ; i < l1 ; i++)
	{
		if(s[i] == t[i])
		{
			continue;
		}
		else if(s[i] > t[i])
		{
			cout<<"1";return 0;
		}
		else if(s[i] < t[i])
		{
			cout<<"-1";return 0;
		}
	}
	cout<<"0";
	//cout<<s[s.size()-1];
	//cout<<t[t.size()-1];
//	for(i = 0  i < )
	return 0;
}

