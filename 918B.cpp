#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	a= 2*a;b = 2*b;
	
	vector<string>x,y;
	string haha;
	vector<string>::iterator j,k;
	for(int i = 0 ; i < a ; i++)
	{
		cin>>haha;
		x.push_back(haha);
	}
	for(int i = 0 ; i < b ; i++)
	{
		cin>>haha;
		y.push_back(haha);
	}
	
		
	for(int i = 0 ; i < x.size() ; i++)
	{
		if(x[i] == y[i])
		{
			cout<<y[i-1]<<" "<<y[i]<<";"<<" #"<<x[i-1];
		}
	}
	return 0;
}
