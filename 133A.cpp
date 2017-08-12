#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,a,b,c;
	string s;
	cin>>s;
	for(i = 0 ; i < s.size() ; i++)
	{
		if(s[i] == 'H' ||s[i] == 'Q' ||s[i] == '9')
		{
			cout<<"YES";return 0;
		}
		else
		{
			continue;
		}
	}
	cout<<"NO";
	return 0;
	
}
