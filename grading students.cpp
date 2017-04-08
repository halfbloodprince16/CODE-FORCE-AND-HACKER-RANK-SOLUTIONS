#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x[n],i,a;
	for(i = 0 ; i < n ; i++)
	{
		cin>>x[i];
	}
	for(i = 0 ; i < n ; i++)
	{
		if(x[i] > 37)
		{
		
		a = x[i]%10;
		switch(a)
		{
			case 0 :x[i] = x[i];break;
			case 1 :x[i] = x[i];break;
			case 2 :x[i] = x[i];break;
			case 3 :x[i] = x[i] +2;break;
			case 4 :x[i] = x[i] +1;break;
			case 5 :x[i] = x[i];break;
			case 6 :x[i] = x[i];break;
			case 7 :x[i] = x[i];break;
			case 8 :x[i] = x[i] +2;break;
			case 9 :x[i] = x[i] +1;break;
		}}
	}
	for(i = 0 ; i < n ; i++)
	{
		cout<<x[i]<<"\n";
	}
	return 0;
	
}
