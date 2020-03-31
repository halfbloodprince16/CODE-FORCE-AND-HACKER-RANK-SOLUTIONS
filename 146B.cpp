#include"bits/stdc++.h" 
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long int ll;
vector<int>u;
vector<int>w;
priority_queue<int>pq;
const int N=1e5+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int solve(int x)
{
	std::vector<int>v;

	while(x)
	{
		if(x%10 == 4 || x%10 == 7)
		{
			v.push_back(x%10);
		}
		x = x/10;
	}
	int ans=0;

	for(int i=0;i<v.size();i++)
	{
		ans += v[i]*pow(10,i);
	}

	//cout<<ans;

	return ans;
}

int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;

	for(int i=a+1;i<500000;i++)
	{
		if(solve(i) == b)
		{
			cout<<i<<endl;
			return 0;
		}
	}

	return 0;
}