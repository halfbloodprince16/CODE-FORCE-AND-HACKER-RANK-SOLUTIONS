#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>v;
vector<int>u;
vector<int>::iterator it;
map<int,int>m;
map<int,int>res;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	int x[n];
	int mx=0;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
		m[x[i]]++;
		mx = max(mx,m[x[i]]);
	}
	if(mx > k){cout<<"NO"; return 0;}

	int ls = *max_element(x,x+n);

	int curr = 0;
	int res[n];

	for(int i=1;i<=ls;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(x[j] == i)
			{
				res[j] = ++curr;
				curr = curr%k;
			}
		}
	}
	cout<<"YES"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<res[i]<<" ";
	}


	return 0;
}