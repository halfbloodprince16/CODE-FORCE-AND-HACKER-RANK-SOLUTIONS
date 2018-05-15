#include"bits/stdc++.h"
#include"string.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n;
	string s;
	int i,j,k;
	cin>>n;
	if(n==0)
	{
		cout<<"0";
		return 0;
	}
	if((n+1)%2==0)
	{
		cout<<(n+1)/2;
		return 0;
	}
	else
	{
		cout<<n+1;
		return 0;
	}
	return 0;
}