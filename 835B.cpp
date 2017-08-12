#include<bits/stdc++.h>
using namespace std;
int add(int n);
int main()
{
	int a,b=0,c=0,i,j,count = 0;
	int x[b],y[c];
	long long int k,n,m;
	cin>>k>>n;
	//type casting
	
	string s1;
    stringstream mystream;
    mystream << n;
    s1 = mystream.str();
    //cout<<s1;
    
    
	int sum = 0,sum1 = 0;
	string s;
	LOOP : sum = add(n);
	//cout<<sizeof(n);
	//cout<<sum;
	if(sum < k)
	{
		n++;
		sum1 = add(n);
		sum = sum1;
		goto LOOP;
	}
	else
	{
		m = n;
		string s2;
	    stringstream mystream;
	    mystream <<m;
	    s2 = mystream.str();
		//cout<<s2;
		//cout<<m;
		if(s1.size() == s2.size())
		{
			for(i = 0 ; i < s1.size() ; i++)
			{
				if(s1[i] != s2[i])
				{
					count++;
				}
			}
				cout<<count;
		}
		
	}
	return 0;
}
int add(int n)
{
	int i,j,sum = 0,a = 0;
	for(i = 0 ; n > 0 ; i++)
	{
		a = n%10;
		sum = sum + a;
		n = n/10;
	}
	
	return sum;
}
