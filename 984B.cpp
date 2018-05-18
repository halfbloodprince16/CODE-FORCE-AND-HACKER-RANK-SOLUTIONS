#include"bits/stdc++.h"
#include"string.h"
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
	int n,m,i,j,k;
	cin>>n>>m;
	char x[n][m];

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>x[i][j];
		}
	}
	int c=0,cnt=0,a,b;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if((int)x[i][j] >= 49 && (int)x[i][j] <= 56)
			{
				c = (int)x[i][j];
				a=i;
				b=j;
				if(x[i--][j] == '*'&&((i>=0&&i<=m)&&(j>=0&&j<=n)))
				{
					cnt++;
				}
				else if(x[i++][j] == '*'&&((i>=0&&i<=m)&&(j>=0&&j<=n)))
				{
					cnt++;
				}
				else if(x[i][j--] == '*'&&((i>=0&&i<=m)&&(j>=0&&j<=n)))
				{
					cnt++;
				}
				else if(x[i][j++] == '*'&&((i>=0&&i<=m)&&(j>=0&&j<=n)))
				{
					cnt++;
				}
				else if(x[i++][j--] == '*'&&((i>=0&&i<=m)&&(j>=0&&j<=n)))
				{
					cnt++;
				}
				else if(x[i--][j--] == '*'&&((i>=0&&i<=m)&&(j>=0&&j<=n)))
				{
					cnt++;
				}
				else if(x[i--][j++] == '*'&&((i>=0&&i<=m)&&(j>=0&&j<=n)))
				{
					cnt++;
				}
				else if(x[i++][j++] == '*'&&((i>=0&&i<=m)&&(j>=0&&j<=n)))
				{
					cnt++;
				}
			}
			cout<<cnt<<endl;
		}
	}

	return 0;
}