#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>u;
vector<int>w;
vector<int>::iterator it;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	int x[3][3];
	memset(x,0,sizeof(x));
	typedef pair<int,int>mpair;
	std::map<int,mpair>m;

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>x[i][j];
			m.insert(make_pair(x[i][j],make_pair(i,j)));
		}
	}

	int b;
	cin>>b;
	int a;
	while(b--)
	{
		cin>>a;
		if((m[a].first == 0 and m[a].second == 0))
		{
			if(a == x[0][0])
			{
				x[0][0] = -1;
			}
		}
		else
		{
			x[m[a].first][m[a].second] = -1;
		}
	}

	int k=0;
	int fl=0;
	//for cols
	while(k<3)
	{
		for(int i=0;i<3;i++)
		{
			if(x[i][k] != -1)
			{
				fl=1;
				break;
			}
		}
		if(fl==0)
		{
			cout<<"Yes";
			return 0;
		}
		fl=0;
		k++;
	}

	//for rows
	k=0;
	fl=0;
	while(k<3)
	{
		for(int i=0;i<3;i++)
		{
			if(x[k][i] != -1)
			{
				fl=1;
				break;
			}
		}
		if(fl==0)
		{
			cout<<"Yes";
			return 0;
		}
		fl=0;
		k++;
	}
	
	//for diagonals
	if(x[0][0] == -1 and x[1][1] == -1 and x[2][2] == -1)
	{
		cout<<"Yes";
		return 0;
	}
	if(x[0][2] == -1 and x[1][1] == -1 and x[2][0] == -1)
	{
		cout<<"Yes";
		return 0;
	}

	cout<<"No";

	return 0;
}