#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int fac(int);
int cal(int);
int main()
{
	int m,n,a,i,j,k;
	cin>>m;
	cal(m);
}

int cal(int m)
{
	int c,a= 0,i,q;
	int x[a];
	for(i = 0 ; i < pow(10,1) ; i++)
	{
		c = fac(i);
		for(i = 1 ; i < 10 ; i++)
		{
			q = c%(10*i*m);
			if(q == 0)
		{
			x[a] = q;
			a++;
		}
			
		}
		
		
	}
	cout<<a<<"\n";
 	for(i = 0 ;i < a ; i++)
 	cout<<x[i];
}

int fac(int i)
{
	if(i == 0)
	return 1;
	if(i > 0)
	return (i*fac(i-1));
}
