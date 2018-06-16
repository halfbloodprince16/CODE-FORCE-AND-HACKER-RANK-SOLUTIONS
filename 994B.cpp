#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<pair<int,int>>v;
vector<pair<int,int>>::iterator itr,it;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
std::queue<int>q;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	ll n,k;
	cin>>n>>k;
	ll i,j;
	ll a,b;
	ll x[n],y[n];
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>y[i];
	}
	for(i=0;i<n;i++)
	{
		v.push_back(make_pair(y[i],x[i]));
	}
	sort(v.begin(),v.end());
	/*for(itr = v.begin();itr!=v.end();itr++)
	{
		cout<<itr->first<<itr->second<<endl;
	}*/
	ll ans=0,cnt=0;
	for(itr = v.begin();itr!=v.end();itr++)
	{ans = itr->first;
		for(it=v.end();it>=v.begin();it--)
		{
			if(itr->second > it->second)
			{
				ans += it->first;
				cnt++;
				//cout<<" "<<cnt;
				if(cnt==k+1)
				{
					break;
				}
			}
		}
		q.push(ans);
		ans=0;
		cnt=0;
	}
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	return 0;
}