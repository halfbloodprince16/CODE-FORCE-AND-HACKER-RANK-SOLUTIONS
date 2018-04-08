#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
vector<int>w;
vector<int>::iterator itr;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	int i,j,haha;
	for(i=0;i<n;i++)
	{
		cin>>haha;
		v.push_back(haha);
	}
	for(i=0;i<n;i++)
	{
		cin>>haha;
		u.push_back(haha);
	}
	int ans=0,cnt=0;
	for(i=0;i<n;i++)
	{
		if(u[i] == 0)
		{
			for(j = 0 ; j < n ;)
			{
				if(j == i)
				{
					ans = ans + v[j] + v[j+1] + v[j+2];//sum this k ahead
					j += 3;
					continue;
				}
				else if(u[j] != 0)
				{
					ans = ans + v[j];
					j++;
				}
				else
				{
					j++;
				}
				
			}
			w.push_back(ans);
			ans = 0;
		}
		
	}
	/*for(itr = w.begin() ; itr != w.end() ; itr++)
	{
		cout<<*itr<<endl;
	}*/
	cout<<*max_element(w.begin(),w.end());
	return 0;
}