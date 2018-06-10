//934B.cpp
#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
//const int N=1e18+1;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	ll n;
	cin>>n;
	if(n>36){return cout<<"-1" ,0;}
	
	if(n%2==0)
	{
		n/=2;
		
		while(n)
		{
			cout<<"8";
			n--;
		}
		return 0;
	}
	else
	{
		cout<<"4";
		n-=1;
		n/=2;
		
		while(n)
		{
			cout<<"8";
			n--;
		}
		return 0;
	}
	return 0;
}