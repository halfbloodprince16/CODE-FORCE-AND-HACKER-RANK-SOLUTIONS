#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<string>v;
vector<string>::iterator it;
vector<int>u;
priority_queue<int>pq;
std::map<int,char> m;
std::map<int,char> ::iterator itr;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j;
	string s;
	ll hash[101]={};
	cin>>k;
	//67 71 73 79 83 89 97 101 103 107 109 113 
	m.insert(pair<int,char>(67,'C'));
	m.insert(pair<int,char>(71,'G'));
	m.insert(pair<int,char>(73,'I'));
	m.insert(pair<int,char>(79,'O'));
	m.insert(pair<int,char>(83,'S'));
	m.insert(pair<int,char>(89,'Y'));
	m.insert(pair<int,char>(97,'a'));
	m.insert(pair<int,char>(101,'e'));
	m.insert(pair<int,char>(103,'g'));
	m.insert(pair<int,char>(107,'k'));
	m.insert(pair<int,char>(109,'m'));
	m.insert(pair<int,char>(113,'q'));
	int c,l,r,fl1=0,fl2=0,x,y,t;


	
	while(k>0)
	{
		cin>>n;
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			c = int(s[i]);
			l =r =c;
		//	cout<<c<<" "<<l<<" "<<r;
			for(int a=l;a>=65;a--)
			{
				if(m[a] != NULL)
				{
					l = a;
					break;
				}
			}
			for(int a=r;a<=122;a++)
			{
				if(m[a] != NULL)
				{
					r = a;
					break;
				}
			}
			//cout<<l<<" "<<r<<" ";
			x = c-l;
			y = r-c;
			t = min(x,y);

			if(l==65)
			{
				c = r;
			}
			else if(r == 122)
			{
				c = l;
			}
			else if(t == x)
			{
				c = l;
			}
			else
			{
				c = r;
			}

			s[i] = m[c];
			
		}
		v.push_back(s);
		k--;
	}
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<endl;
	}
	return 0;
}
