#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int main()
{
	int i,j,k,a,b,c,count = 0,flag = 0;
	cin>>a;
	int x[a][3];
	//i\p
	for(i = 0 ; i < a ; i++)
	{
	for(j = 0 ; j < 3 ; j++)
	{
	
	cin>>x[i][j];
    }
	}
	
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < 3 ; j++)
		{
			if(x[i][j] == 1)
			count++;
			
		}
			if(count >= 2)
			flag++;
			count = 0;
	}
	cout<<flag;
	
	return 0;
}
