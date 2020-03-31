#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>u;
vector<int>w;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/

int main(int argc, char const *argv[])
{
	int x,y;
	cin>>x>>y;
	int mat[1000000][6];
	memset(mat,0,sizeof(mat));

	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=y;j++)
		{
			cin>>mat[i][j];
		}
	}

	int res[100000];
	memset(res,0,sizeof(res));

	for(int i=1;i<=y;i++)
	{	
		for(int j=1;j<=x;j++)
		{
			res[j] = max(res[j],res[j-1]) + mat[j][i];
		}
	}

	for(int i=1;i<=x;i++)
	{
		cout<<res[i]<<" ";
	}

	cout<<endl;
	return 0;
}