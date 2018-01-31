#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,k;
	string s;
	cin>>s;
	std::string::iterator it;
	for(i = 0 ; i < s.length() ; i++)
	{
		s[i] = tolower(s[i]);
	}
	
	vector<char>v;

	char c;
	for(i = 0 ; i < s.length() ; i++)
	{
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
		{
			continue;
		}
		else
		{
			cout<<".";
			cout<<s[i];
		}
	}
	
	return 0;
}
