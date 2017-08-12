#include<iostream>
using namespace std;
int main()
{
	
	int a,b,c,i,j,k,count = 0,flag = 0;
	cin>>a;
	char x[a][5];
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < 5 ; j++)
		{
			cin>>x[i][j];
		}
	}
	

		for(i = 0 ; i < a ; i++)
		{
			for(j = 0 ; j < 4 ; j++)
			{
				if(x[i][j] =='O' && x[i][j+1]=='O')
				{
					x[i][j] = '+';
					x[i][j+1] ='+';
					count++;goto LOOP;
				}
				 
				
			}
		}
		
	LOOP:	if(count > 0)
		{
		    cout<<"YES\n";
			for(i = 0 ; i < a ; i++)
			{
				for(j = 0 ; j < 5 ; j++)
				{	
					cout<<x[i][j];
				}
				cout<<"\n";
			}
		}
		else
		{
			cout<<"NO";
		}
	 return 0;
}
