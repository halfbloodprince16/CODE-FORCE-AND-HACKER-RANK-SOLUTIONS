#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<string>v;
vector<string>::iterator itr;
vector<string>u;
priority_queue<int>pq;
std::stack<char>s;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j,flg=0;
	string str;
	ll hash[101]={};
	
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>str;
		v.push_back(str);
	}
	
	//if(s.empty() == false){cout<<"Y";}
	
	for(itr=v.begin();itr!=v.end();itr++)
	{
		str = *itr;
		for(i=0;i<str.length();i++)
		{
			if(s.empty() == true)
			{
				s.push(str[i]);
			}
			else if(s.empty() == false&&(str[i] == ')'||str[i] == ']'||str[i] == '}'))
			{
				if(str[i] == ')')
				{
					if(s.top() == '(')
					{
						s.pop();
					}
					else
					{
						flg=1;
						break;
					}
				}
				if(str[i] == '}')
				{
					if(s.top() == '{')
					{
						s.pop();
					}
					else
					{
						flg=1;
						break;
					}
				}
				if(str[i] == ']')
				{
					if(s.top() == '[')
					{
						s.pop();
					}
					else
					{
						flg=1;
						break;
					}
				}
			}
			else
			{
				s.push(str[i]);
			}
		}
		if(s.empty() == true && flg==0)
		{
			u.push_back("YES");
		}
		else if(flg==1)
		{
			u.push_back("NO");
			while(!s.empty())
			{
				s.pop();
			}
		}
		else
		{
			u.push_back("NO");
			while(!s.empty())
			{
				s.pop();
			}
		}
		flg=0;
	}

	for(itr=u.begin();itr!=u.end();itr++)
	{
		cout<<*itr<<endl;
	}


	return 0;
}