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
	int n,m;
	cin>>n>>m;

	int x[n];
	memset(x,0,sizeof(x));
	int a,b;
	while(m--)
	{
		cin>>a>>b;
		x[a-1] = b;
	}

	if(x[0] == 0)
	{
		x[0] = 1;
	}

	
	return 0;
}