#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>::iterator itr;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j;
	string s;
	ll hash[101]={};
	ll t;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		if(n>=2&&n<=7)
		{
			v.push_back(1);
		}	
		else
		{
			if(n%2==0)
			{
				v.push_back(n/2);
			}
			else
			{
				k = n-3;
				v.push_back(k/2+1);
			}
		}
		t--;
	}

	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<*itr<<endl;
	}
	return 0;
}