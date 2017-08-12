#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k,a,b,c,d,cnt = 0;
	cin>>a;
	int x[a];
	if(a == 1)
	{
		for(i = 0 ; i < a ; i++)
		{
			cin>>x[i];
			if(x[i] == 0)
			cout<<"NO";
			else
			cout<<"YES";return 0;
		}
	}
	else
	{
		for(i = 0 ; i <a ; i++)
		{
			cin>>x[i];
			if(x[i] == 0)
			{
				cnt++;
			}
			if(cnt > 1)
			{
				cout<<"NO";return 0;
			}
			
		}
		if(cnt == 0)
			{
				cout<<"NO";return 0;
			}
			else
		cout<<"YES";
	}
	
	
	return 0;
}

