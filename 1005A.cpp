#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
std::queue<int>q;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,k,i,j,a,cnt=1,o,p;
	ll hash[101]={};
	cin>>n;
	ll x[n];
	q.push(0);
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		if(i==0){a=x[0];}
		else if(x[i] == a)
		{
			cnt++;
			q.push(i);			
		}
	}
	q.push(n);
	cout<<cnt<<endl;
	
	while(cnt>0)
	{
		o = q.front();
		q.pop();
		p = q.front();
		cout<<p-o<<" ";
		cnt--;
	}	
	return 0;
}