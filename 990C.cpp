#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<string>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
//const int N=1e18+1;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	ll n,i,j;
	cin>>n;
	string s;
	ll a=0,b=0,c=0;
	for(i=0;i<n;i++)
	{
		cin>>s;
		if(s=="("){a++;}
		else if(s==")"){b++;}
		else if(s=="()"){c++;}
	}
	
	if(c==1)
	{
		cout<<(a+b)/2+c;
	}
	else
	{
		cout<<(a+b)/2+c*2;
	}
	return 0;
}