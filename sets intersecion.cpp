#include<iostream>
using namespace std;
#include<conio.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,a,b,c=0,d=0;
	cout<<"enter size of first array then second array";
	cin>>a>>b;
	int x[a],y[b],z[c];
	cout<<"enter elements of first set array";
	for(i = 0 ; i < a ;i++)
	cin>>x[i];
	cout<<"enter elements of second set array";
	for(i = 0 ; i < b ; i++)
	cin>>y[i];
	
		for(i = 0 ; i < a ; i++)
		{
			for(j = 0 ; j < b ; j++)
			{
				if(x[i] == y[j])
				{
					z[c] = x[i];
				    c++;
				}
				else 
				continue;
			}
		}
		
		for(i = 0 ; i < c ; i++)
		{
			for(j = i+1 ; j < c ; j++)
			{
				if(z[i]==z[j])
				{
					z[i]= 0;
				}
			}
		}
		
					for(i = 0 ; i < c ; i++)
					cout<<z[i]<<" ";
			
	return 0;
	getch();
}
