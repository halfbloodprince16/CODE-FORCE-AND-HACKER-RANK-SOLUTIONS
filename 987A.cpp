#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<string>v;
vector<int>u;
priority_queue<int>pq;
std::map<string,string> m1,m2;
std::map<string,string>::iterator it;
const int N=1e6+10;
int flg=0;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	m1.insert(pair<string,string>("purple","Power"));
	m1.insert(pair<string,string>("green","Time"));
	m1.insert(pair<string,string>("blue","Space"));
	m1.insert(pair<string,string>("orange","Soul"));
	m1.insert(pair<string,string>("red","Reality"));
	m1.insert(pair<string,string>("yellow","Mind"));

	ll n,nn;
	string s;
	cin>>n;
	nn=n;
	while(n)
	{
		cin>>s;
		for(it=m1.begin();it!=m1.end();it++)
		{
			if(it->first == s)
			{
				it->second="0";
			}
		}
		n--;
	}
	cout<<(6-nn)<<endl;
	for(it=m1.begin();it!=m1.end();it++)
	{
		if(it->second!="0")
		{
			cout<<it->second<<endl;
		}
	}
	return 0;
}