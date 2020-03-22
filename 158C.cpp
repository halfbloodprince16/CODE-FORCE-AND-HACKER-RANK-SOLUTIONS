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
	int a,b;
	cin>>a>>b;

	double x,y;
	x = ceil(a/0.08);
	y = ceil(b/0.1);

	if(x > y)
	{
		y = x;
	}
	else
	{
		x = y;
	}

	if((int)x*0.08 == a and (int)y*0.1 == b)
	{
		cout<<x;
		return 0;
	}
	cout<<"-1";
	return 0;
}