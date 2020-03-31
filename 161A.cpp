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
	int n,m,x,y;
	cin>>n>>m>>x>>y;

	int sol[n];
	int vest[m];

	memset(sol,0,sizeof(sol));
	memset(vest,0,sizeof(vest));

	for(int i=0;i<n;i++)
	{
		cin>>sol[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>vest[i];
	}

	int pt1=0,pt2=0;
	int cnt=0;
	std::vector<pair<int,int>> res;

	while(pt1<n and pt2<m)
	{
		while(pt2<m and sol[pt1]-x > vest[pt2]) 
		{
			pt2++;
		}
		if(pt2 < m and vest[pt2] <= sol[pt1]+y)
		{
			res.push_back(make_pair(pt1,pt2));
			pt1++;
			pt2++;
			continue;
		}

		pt1++;
	}
	cout<<res.size()<<endl;
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i].first+1<<" "<<res[i].second+1<<endl;
	}

	cout<<endl;
	return 0;
}