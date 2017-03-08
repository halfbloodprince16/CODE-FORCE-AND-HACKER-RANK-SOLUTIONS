# VIGHNESH-TIWARI
#include<iostream>
using namespace std;
int main()
{
	int s,t,a,b,m,n,i,p,q;
	cin>>s>>t;
	cin>>a>>b;
	cin>>m>>n;
	int da[m],db[n];
	for(i = 0 ; i < m ; i++ )
	{
		cin>>da[i];
	}
	for(i = 0 ; i < n ; i++)
	{
		cin>>db[i];
	}
	int count1=0;
	for(i = 0 ; i < m ; i++)
	{
		p = a + da[i];
		if(p >= s && p <= t)
		{
			count1 = count1 +1;
		}
	}
	int count2=0;
	for(i = 0 ; i < n ; i++)
	{
		q = b + db[i];
		if(q>=s && q<=t)
		{
			count2 = count2 +1;
		}
	}
	cout<<count1<<"\n"<<count2;
	return 0;
	
}
