#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	cin>>a;
	int x[a];
	
	for(int i = 0 ; i < a ; i++)
	{
		cin>>x[i];
	}
	
	vector<int>v;
	vector<int> :: iterator j;
	
	int sum=0;
	for(int i = 0 ; i < a ; i++)
	{
		sum = sum + x[i];
		if(sum == 3)
		{
			v.push_back(3);
			sum = 0;
		}
		else if(sum > 3)
		{
			sum = sum - x[i];
		}
	}	
	cout<<v.size();
	return 0;
}
