#include"bits/stdc++.h"
using namespace std;

std::stack<string>stk;

int main() 
{
	int t,i;
	cin>>t;
	
	while(t>0)
	{
	    string s,ss;
	    cin>>s;
	    for(i=0;i<s.length();i++)
	    {
	        if(s[i] != '.')
	        {
	            ss += s[i];
	        }
	        else
	        {
	            stk.push(ss);
	            stk.push(".");
	            ss = "";
	        }
	    }
	    stk.push(ss);
	    
	    while(stk.empty() != true)
	    {
	        cout<<stk.top();
	        stk.pop();
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}