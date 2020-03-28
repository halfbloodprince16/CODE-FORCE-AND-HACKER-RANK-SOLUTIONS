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
	int y,t=0;
	cin>>y;

	while(y >= 5)
	{
		if(y>=500)
		{
			y -= 500;
			t += 1000;
		}
		else
		{
			y -= 5;
			t += 5;
		}
	}
	cout<<t;

	return 0;
}