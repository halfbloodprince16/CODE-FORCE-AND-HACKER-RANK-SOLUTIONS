#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j;
	string s1,s2;
	
	vector<char> v;
	vector<char>::iterator k;
	
	cin>>s1>>s2;
	
	for(i=0,j=0 ; i<s1.length(),j<s2.length() ;)
	{
		if(s1[i] >= s2[j])
		{
			cout<<s1[i];
			i++;
		}
		else
		{
			cout<<s2[j];
			j++;
			break;
		}
	}
	
	
	return 0;
}
