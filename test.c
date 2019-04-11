#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int placequeen(int r2,int c2,int *ptr)
{
	int r1,c1,i;
	for(r1=0;r1<r2;r1++)
	{
		if(c1==c2 || abs(r2-r1)==abs(c1-c2))
		{
			return 0;
		}
	}
	return 1;
}

void display(int *ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<ptr[i]<<" ";
	}
	cout<<endl;
}

void iterative(int n)
{
	int i,j,cnt=0,r=0;
	int *ptr;
	ptr = (int *)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		ptr[i] = -1;
	}
	
	while(r!=-1)
	{
		ptr[r]++;
		if(ptr[r] < n)
		{
			if(placequeen(r,ptr[r],ptr))
			{
				if(r == n-1)
				{
					cout<<"Solution no."<<++cnt;
					display(ptr,n);
				}
				else
				{
					r++;
				}
			}
		}
		else
		{
			ptr[r] = -1;
			r--;
		}
	}
	return;
}


int main() 
{
	int n;
	cout<<"Code for N-Queen\n Enter N :";
	cin>>n;
	
	int ch;
	do
	{
		cout<<"1:Iterative\n2:Recursive";
		cin>>ch;
		switch(ch)
		{
			case 1: iterative(n); break;
			case 2: break;
		}
	}
	while(ch!=3);
	return 0;
}