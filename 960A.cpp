#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
vector<int>w;
vector<int>::iterator itr;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	string s;
	cin>>s;
	int a=0,b=0,c=0,i;
	for(i=0;i<s.length()-1;i++)
	{
		if((int)s[i] <= (int)s[i+1])
		{
			continue;
		}
		else
		{
			cout<<"NO";
			return 0;
		}
	}
	for(i=0;i<s.length();i++)
	{
		
		if(s[i]=='a')
		{
			a++;
		}
		else if(s[i] =='b')
		{
			b++;
		}
		else
		{
			c++;
		}
	}
	if(c == a || c== b)
	{
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
	return 0;
}