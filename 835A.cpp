#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,v1,v2,t1,t2;
	int i,j,k;
	cin>>s>>v1>>v2>>t1>>t2;
	int p1= 0,p2= 0;
	p1 = v1*s+t1*2;
	p2 = v2*s + t2*2;
	if(p1 < p2)
	{
		cout<<"First";
	}
	else if(p1 > p2)
	{
		cout<<"Second";
	}
	else if(p1 == p2)
	{
		cout<<"Friendship";
	}
	return 0;
}
