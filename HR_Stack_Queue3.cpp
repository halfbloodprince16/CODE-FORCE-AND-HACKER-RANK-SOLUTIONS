#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<char>v;
vector<char>::iterator itr;
vector<int>u;
priority_queue<int>pq;
std::stack<string>s;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j;
	string str,ss;
	ll hash[101]={};
	cin>>n;
	ll a,b;
	while(n>0)
	{
		cin>>a;
		if(a==1)
		{
			cin>>ss; //append
			if(s.empty() == true)
			{
				str = str+ss;
				s.push(str);
			}
			else
			{
				str = s.top();
				if(str=="null")
				{
					s.push(ss);
				}
				else 
				{
					str += ss;
					s.push(str);
				}
				
			}
			
		}
		else if(a==2)
		{
			cin>>b;//delete b chars
			str = s.top();
			str.erase(str.end()-b,str.end()); 
			if(str=="")
			{
				s.push("null");
			}
			else
				s.push(str);
		}
		else if(a==3)
		{
			cin>>b;//print kth char
			str = s.top();
			cout<<str[b];
		}
		else if(a==4)
		{
			//undo
			s.pop();
		}
		n--;
	}


	return 0;
}