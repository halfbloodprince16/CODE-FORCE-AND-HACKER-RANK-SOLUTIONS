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
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j;
	string s;
	ll hash[101]={};
	
	cin>>n;
	ll x[n];
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	ll m = *max_element(x,x+n);
	//cout<<m;
	ll id=0,cnt=1;
	bool enter = false;
	while(enter == false)
	{
		for(i=0;i<n;i++)
		{
			if(x[i] == 0 && id==i)
			{
				enter = true;
				//cnt++;cout<<cnt<<"fi";
				break;
			}
			else
			{
				for(j=0;j<n;j++)
				{
					if(x[j]!=0){x[j]-=1;}
				}
				id++;
				if(id > n)
				{
					id=0;
				}
				cnt++;//cout<<cnt;
			}
		}
		if(enter == false)
		{cnt=1;}

	}

	cout<<cnt;
	return 0;
}