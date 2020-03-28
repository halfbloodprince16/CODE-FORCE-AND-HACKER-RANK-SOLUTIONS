#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>u;
vector<int>w;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/

int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;

	typedef std::pair<int,int>ipair;
	std::vector<pair<int,ipair>>v;
	std::vector<pair<int,ipair>>::iterator it;

	for(int i=1 ;i<=n;i++)
	{
		v.push_back({i,make_pair(i,i)});
	}

	int a;
	while(k--)
	{
		cin>>a;
		it = find(v.begin(),v.end(),a);
		cout<<it->first;

	}

	for(it = v.begin(); it!=v.end(); it++)
	{
		cout<<it->first<<" "
			<<it->second.first<<" "
			<<it->second.second<<endl;
	}
	

	return 0;
}