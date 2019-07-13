#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>::iterator it;
vector<int>u;
priority_queue<int>pq;
std::unordered_map<string,int> mp; 
std::unordered_map<string,int> np;
std::unordered_map<string,int> ::iterator itr;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/

int main(int argc, char const *argv[])
{
	int n,m,i;
	string s;
	cin>>n;
	while(n>0)
	{
		cin>>s;
		mp[s]++;
		n--;
	}
	cin>>m;
	while(m>0)
	{
		cin>>s;
		v.push_back(mp[s]);
		m--;
	}

	for(it=v.begin(); it!=v.end(); it++)
	{
		cout<<*it<<endl;
	}
	return 0;
}