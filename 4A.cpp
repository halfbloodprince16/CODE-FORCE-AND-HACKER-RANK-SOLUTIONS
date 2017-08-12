//antons and letters
#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int main()
{
	int i,j,k,a=0,b=0,c,count = 0,flag = 0,len = 0,len2 = 0;
	char s[c];
	char x[a],y[b];
	gets(s);
	
	
	
	
	for(i = 0 ; s[i] != '\0' ; i++)
	{
		len++; 	
	}	
	
	for(i = 0 ; i < len  ; i++)
	{
		if(s[i] > 64 && s[i] <91 || s[i] >96 && s[i] <123 )
		{
			x[a] = s[i];
			a++;
		}
	}
	for(i = 0 ; i < a ; i++)
	{
		for(j = i+1 ; j < a ; j++)
		{
			if(x[i] == x[j])
			{
				x[j] = NULL;
			}
		}
	}
	for(i = 0 ; i < a ; i++)
	{
		if(x[i] != NULL)
		{
			y[b] = x[i];
			b++;
		}
	}
	count = b;
	cout<<count;
	
    
    
return 0;
}
