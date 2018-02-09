#include"bits/stdc++.h"
using namespace std;

int main()
{
	int a;
	cin>>a;
	int x[a];
	int i,j;
	int c1,c2,c3,c4,c5;
	c1=c2=c3=c4=c5 =0;
	for(i = 0; i < a ; i++)
	{
		cin>>x[i];
		switch(x[i])
		{
			case 1 : c1++;break;
			case 2 : c2++;break;
			case 3 : c3++;break;
			case 4 : c4++;break;
			case 5 : c5++;break;
		}
	}
	vector<int>v;
	v.push_back(c1);
	v.push_back(c2);
	v.push_back(c3);
	v.push_back(c4);
	v.push_back(c5);

	int max = *max_element(v.begin(), v.end());

	for(i = 0 ; i < 5 ; i++)
	{
		if(max == v[i])
		{
			cout<<i+1;break;
		}
	}
	return 0;
}