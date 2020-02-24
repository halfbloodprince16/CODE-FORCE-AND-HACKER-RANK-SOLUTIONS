#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
bool check_all_vis_true(visited[],int m)
{
	for(int i=0;i<m;i++)
	{
		if(visited[i] == false)
		{
			return false;
		}
	}
	return true;
}

int calculate_cost(int graph[][3],int m,int id)
{
	bool visited[m];
	memset(visited,false,sizeof(visited));

	visited[id] = true;

	while(check_all_vis_true(visited,m) != true)
	{
		
	}
}

void solve()
{
	int n,m,clib,croad;
	cin>>n>>m>>clib>>croad;
	int graph[m][3];
	int count[m];

	memset(graph,0,sizeof(graph));
	memset(count,0,sizeof(count));

	for(int i=0;i<m;i++)
	{
		cin>>graph[i][0]>>graph[i][1];
		count[graph[i][0]-1]++;
		count[graph[i][1]-1]++;
	}

	int id = *min_element(count,count+m);
	int res = calculate_cost(graph,m,id+1);

}

int main()
{
	fast;
	int t;
	cin>>t;

	while(t--)
	{
		solve();
	}
	return 0;
}