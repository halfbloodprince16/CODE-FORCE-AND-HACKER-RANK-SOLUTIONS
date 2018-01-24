#include<bits/stdc++.h>
#include <sstream>
using namespace std;

void result(int,int,int);
void check(int,int);
int main()
{
	int x,i,j,y,z;
	string s1,s2;
	
	cin>>x;
	cin>>s1;
	cin>>s2;
	
	for(i = 0,j=0 ; i < s1.length(),j<s2.length() ; i++,j++)
	{
		if(s1[i] == '7' || s2[i] == '7')
		{
			cout<<"0";
			return 0;
		}
	}
	
	stringstream a(s1);
	stringstream b(s2);
	
	a>>y;
	b>>z;
	result(x,y,z);
	return 0;
}

void result(int x,int y,int z)
{
	while(y == 7 || z == 7)
	return;
}
