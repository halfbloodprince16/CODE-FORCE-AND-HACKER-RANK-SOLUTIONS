#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<pair<int,int>>v;
vector<pair<int,int>>::iterator itr;
vector<int>u;
vector<int>::iterator it1,it2;
priority_queue<int>pq;
std::map<int,int>m;
const int N=5*1e4+1;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j,x,c,p1,p2;
	string s;
	ll hash[N]={};
	cin>>k;
	ll t,tt;
	int flg=0;
	while(k>0)
	{
		cin>>c;
		cin>>n;
		ll x[n];
		for(i=0;i<n;i++)
		{
			cin>>x[i];
			hash[x[i]]++;
		}
		for(i=1;i<N;i++)
		{
			if(hash[i]>0)
			{
				hash[i]--;
				tt = c-i;
				if(hash[tt]>0)
				{
					for(j=0;j<n;j++)
					{
						if(x[j]==i)
						{
							p1=j+1;
							x[j]=0;
							break;
						}
					}
					for(j=0;j<n;j++)
					{
						if(x[j]==tt)
						{
							p2=j+1;
							break;
						}
					}
					v.push_back(make_pair(min(p1,p2),max(p1,p2)));
					flg=1;
					break;
				}
				else
				{
					hash[i]++;
				}
			}
			if(flg==1)
			{
				break;
			}
			
		}
		flg=0;
		tt=0;
		p1=p2=0;
		k--;
	}
	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<itr->first<<" "<<itr->second<<endl;
	}
	
	return 0;
}