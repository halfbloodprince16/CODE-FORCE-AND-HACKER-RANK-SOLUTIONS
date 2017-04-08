#include<iostream>
using namespace std;
int main()
{
	int p,m,n,q;
	cout<<"enter no. of lines";
	cin>>n;
	for(p = 1 ; p <= n ; p++)
	{
		for(q = 1 ; q <= n - p ; q++)
		cout<<"    ";//4 spaces
		m = p;
		for(q = 1 ; q <= p ; q++)
		{
			cout.width(4);
			cout<<m++;
		}
		
		m = m-2;
		for(q = 1 ; q<p ; q++)
		{
			cout.width(4);
			cout<<m--;
		}
			
		cout<<endl;
		
		
	}
}
