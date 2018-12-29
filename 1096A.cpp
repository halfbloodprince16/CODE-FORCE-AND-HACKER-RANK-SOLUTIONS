#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<pair<int,int>>v;
vector<pair<int,int>>::iterator itr;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j,a,b,flg=0;;
	string s;
	ll hash[101]={};
	cin>>k;
	while(k>0)
	{
		cin>>a>>b;
		if(a*2 <= b)
		{
			v.push_back(pair<int,int>(a,a*2));
		}
		k--;
	}

	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<itr->first<<" "<<itr->second<<endl;
	}
	return 0;
}