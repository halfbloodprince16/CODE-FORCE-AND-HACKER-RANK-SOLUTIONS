#include<bits/stdc++.h>
using namespace std;
main()
{
    int x,y,a,b,c,i,j,k,m,n,count = 0 , flag = 0;
    string s;
    cin>>s;
    for(i = 0 ; i < s.size() ; i++)
    {
    	if(s[i] == '4' || s[i] == '7')
    	{
    		flag++;
		}
	}
    
	if(flag == s.size())
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
    return 0;
}
