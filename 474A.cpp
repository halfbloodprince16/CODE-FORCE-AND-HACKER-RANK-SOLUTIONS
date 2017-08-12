#include<bits/stdc++.h>
using namespace std;
#include<string.h>

int main()
{	
	int a,b=0,c,i,j,k,count = 0,w1= 0,w2= 0,flag =0;
	int x[b];
	cin>>a;

	if(a/4==0||1/7==0)
	{
		cout<<"YES";
		return 0;
	}
	//type casting

std::string s = std::to_string(a);
cout<<s;
cout<<s.size();
	
	
	for(i = 0 ; i < s.size() ; i++)
	{
		if(s[i] == 4 || s[i] == 7)
		{
			count++;
		}
	} 
	if(count == s.size())
	cout<<"YES";
	else
	cout<<"NO";     
	return 0;
}
