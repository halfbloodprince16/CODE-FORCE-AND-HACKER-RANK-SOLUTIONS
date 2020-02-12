#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
vector<int>::iterator itr;
priority_queue<int>pq;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/

int main()
{
    fast;
    int n,m;
    cin>>n>>m;
    int x[n],y[m];

    map<int,int>mp;
    map<int,int>::iterator it;

    for(int i=0;i<n;i++)
    {
    	cin>>x[i];
    }
    for(int i=0;i<m;i++)
    {
    	cin>>y[i];
    }
    
    for(int i=0;i<m;i++)
    {
    	for(int k=1;k<=sqrt(y[i]);k++)
    	{
    		mp[k]++;
    		if(y[i]%k == 0)
    			mp[y[i]/k]++;
    	}
    }

    for(it=mp.begin();it!=mp.end();it++)
    {
    	if(it->second >= m)
    	{
    		v.push_back(it->first);
    	}
    }

	
	//cout<<"res:"<<endl;
    int fl=0;
    for(itr=v.begin();itr!=v.end();itr++)
    {
    	for(int i=0;i<n;i++)
    	{
    		if(*itr%x[i] == 0 and *itr/x[i] >= 1)
    		{
    			continue;
    		}
    		else
    		{
    			fl=1;
    			break;
    		}
    	}
    	if(fl == 0)
    	{
    		u.push_back(*itr);
    		//cout<<*itr<<endl;
    	}
    	else
    	{
    		fl=0;
    	}
    }
    cout<<u.size();

    return 0;
}