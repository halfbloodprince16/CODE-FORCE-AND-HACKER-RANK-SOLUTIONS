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
			if(s.empty()==true)
			{
				s.push(ss);
			}
			else
			{
				s.push(s.top()+ss);
			}
		}
		else if(a==2)
		{
			cin>>b;//delete b chars
			str = s.top();
			str.erase(str.end()-b,str.end());
			s.push(str);
			
		}
		else if(a==3)
		{
			cin>>b;//print kth char
			str = s.top();
			v.push_back(str[b-1]);
		
		}
		else if(a==4)
		{
			//undo
			s.pop();
		}
		str="";
		ss="";
		n--;
	}

	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<*itr<<endl;
	}
	return 0;
}