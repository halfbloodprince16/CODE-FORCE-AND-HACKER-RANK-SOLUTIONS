#include "bits/stdc++.h"
using namespace std;

class Sample
{
public:
	int i,j,k;
	int n;
	int x[100][5]={};
	int y[100]={};
	Sample()
	{
		i=j=k=0;
		n=0;
	}
	void getdata();
	void output();
};

void Sample :: getdata()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>x[i][j];
		}
	}

	for(i = 0 ;i < n ; i++)
	{
		for(j=0;j<5;j++)
		{
			y[i] = y[i] + x[i][j];
		}
	}
}

void Sample :: output()
{
	int cnt=0;
	for(i = 1 ; i < n ; i++)
	{
		if(y[i] > y[0])
		{
			cnt++;
		}
	}

	cout<<cnt;
}

int main()
{
	Sample s;
	s.getdata();
	s.output();
	return 0;
}