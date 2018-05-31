#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<pair<int,int>>v;
vector<pair<int,int>>u;
priority_queue<int>pq;
std::map<int,int> m1,m2;
std::vector<pair<int,int>>::iterator it,ir;
const int N=1e6+10;
int flg=0;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	ll m,n;
	cin>>m>>n;
	if(n*log10(m)>m*log10(n))
	{
		cout<<">";
		return 0;
	}
	else if(n*log10(m)<m*log10(n))
	{
		cout<<"<";
		return 0;
	}
	else
		cout<<"=";
	return 0;
}