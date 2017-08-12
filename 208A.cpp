#include<bits/stdc++.h>
using namespace std;
int main() 
{
	string s;
	int i,j,k,a,b,c;
	int flag=1,count = 0;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
	    if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B')
		{
	        i+=2;
	        if(flag!=1)
			{
	            cout<<" ";
	        }
	        continue;
	    }
		else 
		{
	        flag=0;
	        cout<<s[i];
	    }
	}
}
