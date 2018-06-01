#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<pair<int,int>>v;
vector<pair<int,int>>u;
priority_queue<int>pq;
std::map<int,int> m1,m2;
std::vector<pair<int,int>>::iterator it,ir;
const int N=1e6+10;
int flg=0;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	int n,a,i,j;
	cin>>n;
	int x[n],cnt=0;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(x[i] == x[j])
			{
				x[i] = -1;
				cnt++;
			}
		}
	}
	cout<<(n-cnt)<<endl;
	for(i=0;i<n;i++)
	{
		if(x[i]!=-1){cout<<x[i]<<" ";}
	}
	return 0;
}