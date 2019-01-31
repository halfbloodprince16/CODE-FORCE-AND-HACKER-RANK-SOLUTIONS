#include"bits/stdc++.h"
using namespace std;

set<int>::const_iterator pos;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,m,i,j;
		cin>>n>>m;
		std::vector<set<int>> v;
		v.resize(n+1);
		for(i=0;i<m;i++)
		{
			int v1,v2;
			cin>>v1>>v2;
			v[v1].insert(v2);
			v[v2].insert(v1);
		}
		bool visit[n+1]={false};
		int dis[n+1]={0};

		queue<int>q;
		int head;
		cin>>head;
		visit[head]=true;
		q.push(head);

		while(!q.empty())
		{
			int k = q.front();
			for(pos=v[k].begin();pos!=v[k].end();pos++)
			{
				if(!visit[*pos])
				{
					q.push(*pos);
					visit[*pos] = true;
					dis[*pos] = dis[k] + 6;
				}
			}
			q.pop();
		}
		for(i = 1; i <= n; i++) {
            if(i != head) {
                if(dis[i] == 0) {
                    cout<<"-1 ";
                } else {
                    cout<<dis[i]<<" ";
                }
            }
        }
        cout<<"\n";

		t--;
	}
	return 0;
}
