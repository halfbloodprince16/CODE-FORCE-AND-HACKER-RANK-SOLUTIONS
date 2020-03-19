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

void solve()
{
	int n;
	cin>>n;
	int x[n];
	memset(x,0,sizeof(x));

	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}

	int mn = *min_element(x,x+n);
	int mx = *max_element(x,x+n);

	if(mx-mn >= n)
	{
		cout<<"YES"<<endl<<"1"<<" "<<n<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}